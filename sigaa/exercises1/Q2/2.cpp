//CARLOS EDUARDO PINHEIRO SILVA - 20220030194

#include <iostream>

using namespace std;

// Declarando as funcoes.
int minimum(int a, int b);
int min(int array[], int tamanho);

int main(int argc, char const *argv[]){
    int qtd;
    cin >> qtd;
    int array[qtd];

    // Preenchendo o array...
    for (int i = 0; i < qtd; i++){
        cin >> array[i];
    }
    cout << "O menor elemento eh: " << min(array, qtd);
    return 0;
}

int min(int array[], int tamanho){
    if (tamanho == 0){
        // Caso nao haja nenhum elemento sera retornado 0.
        return 0;
    } else if (tamanho == 1){
        // Caso so haja um elemento sera retornado o proprio.
        return array[tamanho-1];
    } else {
        // Caso haja 2 ou mais elementos, diminuo o valor ´tamanho´ em 1 para poder referenciar diretamente o ultimo elemento do array.
        tamanho -= 1;
        // Aqui realizo a comparacao entre o ultimo elemento do array, e a chamada recursiva da funcao atual, assim, obtendo o menor valor do array.
        return minimum(array[tamanho], min(array, tamanho));
    }
}

int minimum(int a, int b){
    // Comparo os valores recebidos
    if (a < b){
        return a;
    } else return b; // Caso nao retorne ´a´, de imediato retorno b, pois nesse caso temos: b > a ou b = a. No caso de ser igual nao faz diferenca!
}
