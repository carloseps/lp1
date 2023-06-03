#include <iostream>
#include <fstream>
#include <string>
#include "Pessoa.h"

using namespace std;

#define TAMANHO 4

int main() {
    std::ifstream arquivoLeitura("arquivo.txt");
    string linha;
    const int tamanhoArray = TAMANHO;
    Pessoa pessoas[tamanhoArray];

    if (arquivoLeitura.is_open()) {
        int i = 0;
        while (getline(arquivoLeitura, linha) && i < tamanhoArray) {
            Pessoa pessoa(linha);
            pessoas[i] = pessoa;
            i++;
        }

        arquivoLeitura.close();

        for (int j = 0; j < tamanhoArray; j++) {
            std::cout << pessoas[j].getNome() << std::endl;
        }
    } else {
        std::cout << "Não foi possível acessar o arquivo.txt" << std::endl;
    }

    return 0;
}
