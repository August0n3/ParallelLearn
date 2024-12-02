# Questão 12

### Suponha que um programa deva executar 1012 instruções para resolver um problema específico. Suponha ainda que um sistema de processador único possa resolver o problema em 106 segundos (cerca de 11, 6 dias). Portanto, em média, o sistema de processador único executa 106 instruções por segundo. Agora suponha que o programa tenha sido paralelizado para execução em um sistema de memória distribuída. Suponha também que o programa paralelo usa p processadores e, assim, cada processador executará 1012/p instruções. Além disso, cada processador deverá enviar 109 (p − 1) mensagens. Por fim, suponha que não haja overhead adicional na execução do programa paralelo. Ou seja, o programa será concluído depois que cada processador tiver executado todas as suas instruções e enviado todas as suas mensagens e não haverá atrasos devido a coisas como espera por mensagens.

#### (a) Suponha que demore 10−9 segundos para enviar uma mensagem. Quanto tempo levará para o programa ser executado com 1000 processadores se cada processador for tão rápido quanto o processador único no qual o programa serial foi executado?
- 10¹² instruções no total;
- 1000 processadores;
- Cada processador fica com 10¹²/1000 = 10⁹ instruções.
-Cada processador faz 10⁶ instruções por segundo, logo para concluir todas as instruções 10⁹/10⁶ = 1000 segundos;
- Cada mensagem levará 10⁹*(1000-1)/10⁹ = 999 segundos

- Por fim o tempo total é de 1999 segundos.

#### (b) Suponha que demore 10−3 segundos para enviar uma mensagem. Quanto tempo levará para o programa rodar com 1000 processadores?

- 10¹² instruções no total;
- 1000 processadores;
- Cada processador fica com 10¹²/1000 = 10⁹ instruções.
-Cada processador faz 10⁶ instruções por segundo, logo para concluir todas as instruções 10⁹/10⁶ = 1000 segundos;
- Cada mensagem levará 10⁹*(1000-1)/10³ => 999 * 10⁶ = 999000000 segundos
- Por fim o tempo total é de 999001000 segundos.

