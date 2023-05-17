#include "verificarPrimo.h"
#include <cmath>

//Verificacoes necessarias p que eu possa determinar se o numero informado eh primo ou nao
bool ehPrimo(int n) {
    if(n <= 1) {
        return false;
    }
    if(n == 2) {
        return true;
    }
    if(n % 2 == 0) {
        return false;
    }
    //Nao sei explicar mas tive que usar o ´sqrt´ pq ´(n * n)´ nao estava funcionando _apanhei mt p descobrir isso_
    int limite = (sqrt(n));
    for(int i = 3; i <= limite; i += 2) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

//Nao consegui pensar numa forma sucinta de achar o maiorPrimoAnterior de forma recursiva
int maiorPrimoAnterior(int n) {
    for(int i = n-1; i >= 2; i--) {
        if(ehPrimo(i)) {
            return i;
        }
    }
    return 0;
}
