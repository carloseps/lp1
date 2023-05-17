## Testes

Para testar o código é necessário apenas que o usuário interaja com os menus que irão aparecer durante o tempo de execução. Tendo a possibilidade de:

1. Listar alunos
2. Ordenar alunos
3. Sair do programa

É importante ressaltar que ao selecionar a opção "*2 - Ordenar alunos*" abre-se um novo menu que disponibiliza opções de ordenação da lista de alunos. No caso, por qual campo eles devem ser ordenados, sendo:

1. Matrícula
2. Nome
3. Nota

Existe também a opção "*4 - Sair*", que se selecionada, faz com que retorne ao menu inicial.

PS: Não é necessário preencher dados e informações sobre os alunos, como: matrícula, nome e notas. O código conta com um método que popula a lista de alunos sozinho.

São criados alunos com nomes pertencentes a um array de nomes, que possui 100 strings, ou seja, 100 opções de nomes aleatórios de pessoas comuns.

A matrícula é gerada através de uma estratégia de multiplicação de iterador com soma.

As notas de cada aluno são geradas aleatoriamente usando a função _rand_, que é uma função da biblioteca padrão *cstdlib* que gera um número pseudo-aleatório.