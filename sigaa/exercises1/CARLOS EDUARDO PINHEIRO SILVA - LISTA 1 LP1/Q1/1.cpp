//CARLOS EDUARDO PINHEIRO SILVA - 20220030194

#include <iostream>

using namespace std;

// Declarando as funcoes.
int soma(int tamanho);
int aoCubo(int num);

int main(int argc, char const *argv[]){
    int n;
    cin >> n;
    // Printando o retorno da funcao soma.
    cout << soma(n);
}

int soma(int tamanho){
    if (tamanho == 0){
        // Caso a quantidade de numeros da expressao seja 0, retorna 0.
        return 0;
    } else if (tamanho == 1){
        // Caso a quantidade de numeros da expressao seja 1, retorna 1^3 = 1.
        return 1;
    } else {
        // Caso a quantidade de numeros da expressao seja >2, elevo o último elemento da sequencia ao cubo e somo com a chamada recursiva da funcao.
        return aoCubo(tamanho) + soma(tamanho - 1);
    }
}

int aoCubo(int num){
    return num * num * num;
}

