**b)**
Recursão de cauda é uma estratégia de programação onde a chamada recursiva de uma função é a última operação a ser executada nela.

Isso faz com que a função use menos espaço na pilha de chamadas em comparação com a recursão padrão. Por isso que a recursão em cauda em geral é mais eficiente para evitar estouros de pilha.

Uma melhoria para a recursão em cauda é a otimização de cauda. Que é uma técnica usada pelos compiladores e que transforma a recursão em cauda num loop, reduzindo o uso de memória.

**c)**
Não, pois após a chamada recursiva é executada a soma dos retornos recursivos.

**d)**
Esse erro costuma ocorrer quando o código faz muitas chamadas recursivas.

O que de fato acontece é que a pilha de execução do programa fica sem espaço para armazenar novas chamadas da função.

Geralmente ocorre em recursões padrão, sem ser a de cauda.