# Onde n%p == 0
n = tamanho do problema
p = quantidade de nucleos
chunk = n/p
my_rank = identificador do nucleo atual

meu_pri_i = chunk * my_rank;
meu_ult_i = meu_pri_i + chunk;

# Onde n%p != 0
n = tamanho do problema
p = quantidade de nucleos
chunk = n/p <-- divisão inteira
my_rank = identificador do nucleo atul
resto = n%p
```
if (myrank < resto){
    num = chunk + 1
    meu_pri_i = num * my_rank;

}else{
    num = chunk
    meu_pri_i = num * my_rank + resto;

}

meu_ult_i = meu_pri_i + num;
```