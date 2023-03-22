#include <iostream>

using namespace std;

// Declarando as funcoes.
int contarOcorrencias(int num, int digito);

int main(int argc, char const *argv[]){
    int d, num;
    cin >> d >> num;    
    int x = contarOcorrencias(num, d);
    // Printando o retorno da funcao contarOcorrencias.
    cout << x;
    return 0;
}

int contarOcorrencias(int num, int digito){
    if(num <= 0){
        // Caso a quantidade de algarismos seja <=0, retorna 0.
        return 0;
    }
    // Aqui separo o ultimo algarismo do numero
    int resto = num % 10;
    
    if(resto == digito){
        // Somo as ocorrencias de acordo com o retorno
        return 1 + contarOcorrencias(num/10, digito);
    }
    return contarOcorrencias(num/10, digito);
}
