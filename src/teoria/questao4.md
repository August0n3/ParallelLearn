# Questão 4

```
p = quantidade de nucleos;

salto = 1;
sum = mysum

while (salto < p){
    
    if(my_rank % salto){
    
    parc = my_rank xor salto;
        
        if(parc < p){
            num = recebe o valor do parceiro;
            mysum += num
        }else{
            envia o valor para o parceiro
        }
    }

    salto<<1
}

```