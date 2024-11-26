#include <stdio.h>
#include <mpi.h>

float f( float x){
    float y = (x*x*x)/3 + (x*x)/2 + 1; //exemplo de uma funcao qualquer
    return y;
}

int main(){
    double h,area_total,x_i,a,b,n;
    double local_n, local_a,local_b,local_integral;
    int my_rank, comm_sz;
    
    a =-2.0f;
    b = 1.5f;
    n = 1000000000.0f;

    h = (b-a)/n;

    MPI_Init(NULL,NULL);
    MPI_Comm_size(MPI_COMM_WORLD, &comm_sz);
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
    
    local_n = n/comm_sz;

    local_a = a + my_rank*local_n*h;
    local_b = local_a + local_n*h;
    
    local_integral = (f(local_a) + f(local_b))/2;
     for (int i = 1; i < local_n; i++){
        x_i = local_a+i*h;
        local_integral += f(x_i);
    }
    local_integral = local_integral*h;

    if (my_rank!=0){
        MPI_Send(&local_integral,1,MPI_DOUBLE,0,0,MPI_COMM_WORLD);
    }else{
        area_total = local_integral;
        for (int proc = 1; proc < comm_sz; proc++){
            MPI_Recv(&local_integral,1,MPI_DOUBLE,proc,0,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
            area_total += local_integral;
        }
        
    }

    if (my_rank==0){
       printf("Area total estimada = %.6f\n", area_total);
       printf("qtd_proc = %d\n",comm_sz);
    }
    
    MPI_Finalize();
}