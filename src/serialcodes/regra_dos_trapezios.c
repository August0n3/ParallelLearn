#include <stdio.h>


float f( float x){
    float y = (x*x*x)/3 + (x*x)/2 + 1; //exemplo de uma funcao qualquer
    return y;
}

int main(){
    double h,area_total,x_i,a,b,n;

    a =-2.0f;
    b = 1.5f;
    n = 1000000000.0f;

    h = (b-a)/n;
    area_total = (f(a) + f(b))/2;

    for (int i = 1; i < n; i++){
        x_i = a+i*h;
        area_total += f(x_i);
    }

    area_total = h*area_total;
    printf("Area total estimada = %.6f\n", area_total);
    
    

}