# Questão 10

# Dado o exemplo a seguir envolvendo leituras de cache de um array bidimensional.
```
double A[MAX][MAX], x[MAX], y[MAX];
. . .
// Initializa A e x; y = 0
. . .
// Primeiro par de loops/
for (i = 0; i < MAX ; i++)
for (j = 0; j < MAX; j++)
y [i] += A[i][j]x[j];
. . .
// y = 0
. . .
// Segundo par de loops
for (j = 0; j < MAX ; j++)
for (i = 0; i < MAX; i++)
y [i] += A[i][j]x[j];

```

#### (a) Como o aumento do tamanho da matriz afetaria o desempenho dos dois pares de loops aninhados?
- Com uma matriz maior o desempenho seria afetado pelo aumento de cache-miss em ambos os casos, aumentando o acesso ao barramento, e diminuindo assim a eficiência do programa.

#### (b) Como o aumento do tamanho da cache afetaria o desempenho dos dois pares de loops aninhados?
- Com uma cache maior seria possivel armazenar em memória, diminuindo o número de acesso ao barramento.
#### (c) Quantas falhas ocorrem nas leituras de A no primeiro par de loops aninhados?
- Supondo que a linha de cache armazene 4 elementos de A, temos a fórmula MAX²/4 para quantificar, caso MAX%4 == 0. Caso contrario MAX²/4+1
#### (d) Quantas falhas ocorrem no segundo par?
- Devido o acesso ser por colunas, podemos quantificar pela fórmula MAX².