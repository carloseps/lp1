//CARLOS EDUARDO PINHEIRO SILVA - 20220030194

#include <iostream>

using namespace std;

// Declarando as funcoes.
float soma(float tamanho);
float fraciona(float num);

int main(int argc, char const *argv[]){
    float n;
    cin >> n;
    // Printando o retorno da funcao soma com a precisao de 2 casas decimais.
    printf("Resultado %.2f", soma(n));
}

float soma(float tamanho){
    if (tamanho == 0){
        // Caso a quantidade de numeros da expressao seja 0, retorna 0.
        return 0;
    } else if (tamanho == 1){
        // Caso a quantidade de numeros da expressao seja 1, retorna 1/1 = 1.
        return 1;
    } else {
        // Caso a quantidade de numeros da expressao seja >2, fraciono o ultimo elemento da sequencia e somo com a chamada recursiva da funcao.
        return fraciona(tamanho) + soma(tamanho - 1);
    }
}

float fraciona(float num){
    // Eh importante notar que as operacoes sao realizadas sempre entre dados do mesmo tipo, no caso, float.
    return 1/num;
}