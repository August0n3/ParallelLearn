# Questão 13

#### (a) Suponha que um sistema de memória compartilhada use coerência de cache (snooping) e caches write-back. Suponha também que o núcleo 0 tenha a variável x em seu cache e execute a atribuição x = 5. Finalmente, suponha que o núcleo 1 não tenha x em seu cache e, após a atualização do núcleo 0 para x, o núcleo 1 tente executar y = x. Qual valor será atribuído a y? Por que?

- O núcleo 1 atribuirá o valor 5 de x à variável y. Como o sistema utiliza cache write-back quando o núcleo 1 for buscar a variável na memória principal, ela ainda não teria sido atualizada, mas devido a coerência de cache o núcleo 1 é avisado e busca o valor correto na cache do núcleo 0.

#### (b) Suponha que o sistema de memória compartilhada da parte anterior utilize um protocolo baseado em diretório. Qual valor será atribuído a y? Por que?

- Devido a estrutura da coerêcia de cache em via diretorio, somente os núcleos que tem a variável naquele momento tem acesso a atualização dela via coerência, logo como o núcleo 1 não tinha a variável em sua cache e ela ainda está desatualizada na memória principal, y recebe o valor desatualizado de x. 

#### (c) Como os problemas encontrados nas duas primeiras partes podem ser resolvidos?