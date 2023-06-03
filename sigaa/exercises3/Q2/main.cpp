#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

#define TAMANHO 4

int minimum(int a, int b);
int min(int array[], int tamanho);

float calculaMedia(int array[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += array[i];
    }
    return (soma/(double)tamanho);
}

int main() {
    std::ifstream arquivoLeitura("arquivoASerLido.txt");
    std::ofstream arquivoPreenchimento("arquivoASerPreenchido.txt");
    string linha;
    const int tamanhoArray = TAMANHO;
    int numeros[tamanhoArray];

    if (arquivoLeitura.is_open()) {
        int i = 0;
        while (getline(arquivoLeitura, linha) && i < tamanhoArray) {
            int numero = std::stoi(linha);
            numeros[i] = numero;
            i++;
        }
        arquivoLeitura.close();
        std::sort(numeros, numeros + tamanhoArray);
        if (arquivoPreenchimento.is_open()) {
            arquivoPreenchimento << "Menor elemento: " << numeros[0] << "\n";
            arquivoPreenchimento << "Maior elemento: " << numeros[tamanhoArray-1] << "\n";
            arquivoPreenchimento << "Média dos elementos: " << calculaMedia(numeros, tamanhoArray-1) << "\n";
        }
    } else {
        std::cout << "Não foi possível acessar o arquivoASerLido.txt" << std::endl;
    }
    return 0;
}
