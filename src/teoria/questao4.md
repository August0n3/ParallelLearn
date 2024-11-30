div = 2
salt = 1
sum = my_val
if (rank//salt == 0){

    if (rank // div == 0){
        
        if( rank + salt < p){
            parceiro  = rank+salto
            val = recebe do parceiro
            sum+= val
        }
        
    }else{
        parceiro = rank - salto
        enviar parceiro
    }
}

salt*=2
div*=2
