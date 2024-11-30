# Questão 8

## Quando discutimos a adição de ponto flutuante, partimos da suposição simplificadora de que cada uma das unidades funcionais levava o mesmo tempo. Suponha que buscar (fetch) e armazenar (store) levem 2 nanossegundos cada e que as operações restantes levem 1 nanossegundo cada.

#### (a) Quanto tempo leva uma adição de ponto flutuante com essas suposições?
 - Temos 2 operações que levam 2 ns e 5 operações 1 ns logo: 2*2 + 1\*5 = 9 ns

#### (b) Quanto tempo levará uma adição sem pipeline de 1.000 pares de floats com essas suposições?
- 9 ns * 1000 = 9000 ns
#### (c) Quanto tempo levará uma adição em pipeline de 1.000 pares de floats com essas suposições?
- 2 * 999 + 9 = 2007 ns

#### (d) O tempo necessário para busca e armazenamento pode variar consideravelmente se os operandos/resultados forem armazenados em diferentes níveis da hierarquia de memória. Suponha que uma busca de um cache de nível 1 leve dois nanossegundos, enquanto uma busca de um cache de nível 2 leve cinco nanossegundos e uma busca da memória principal leve cinquenta nanossegundos. O que acontece com o pipeline quando há uma falha de cache de nível 1 na busca de um dos operandos?O que acontece quando há uma falha de nível 2?
- No primeiro caso se adicionaria mais 5 ns no tempo total e no segundo caso 55 ns, já que no pipeline parte das instruções são executadas uma após a outra em uma fila.