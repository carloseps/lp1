#include <iostream>
#include "fatorial.h"
#include "verificarPrimo.h"

using namespace std;

int main(int argc, char** argv){

    //Aqui analiso se o usuario digitou a entrada no formato correto
    //Caso ele informe dois números ira aparecer uma mensagem de erro
    if(argc != 2) {
        cout << "Formato inválido! Utilize: " << argv[0] << " <numero>" << endl;
        return 1;
    }
    //Obtendo o numero extraindo ele do vetor de argumentos/caracteres informados pelo usuario 
    //PS: Descobri um dia desses q dava p fazer isso kkkk :D
    int n = atoi(argv[1]);
    if(n <= 2){
        cout << "Não há maior primo anterior ao fatorial de " << n << endl;
        return 0;
    }
    int fat = fatorial(n);
    int primo = maiorPrimoAnterior(fat);
    cout << "O maior primo anterior ao fatorial de " << n << " (" << fat << ") é: " << primo << endl;
    return 0;
}
