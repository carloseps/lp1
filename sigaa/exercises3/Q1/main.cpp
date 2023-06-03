#include <iostream>
#include <fstream>
#include <string>
#include "Pessoa.h"

using namespace std;

#define TAMANHO 4

/**
 * @brief Função principal do programa.
 * @return 0 se o programa executar corretamente.
 */
int main() {
    std::ifstream arquivoLeitura("arquivo.txt"); /**< Objeto ifstream para leitura do arquivo. */
    string linha; /**< Variável para armazenar cada linha do arquivo. */
    const int tamanhoArray = TAMANHO; /**< Tamanho do array de pessoas. */
    Pessoa pessoas[tamanhoArray]; /**< Array de objetos Pessoa. */

    if (arquivoLeitura.is_open()) {
        int i = 0; /**< Índice para controlar a posição no array. */
        while (getline(arquivoLeitura, linha) && i < tamanhoArray) {
            Pessoa pessoa(linha); /**< Cria um objeto Pessoa a partir da linha do arquivo. */
            pessoas[i] = pessoa; /**< Armazena a Pessoa no array. */
            i++;
        }

        arquivoLeitura.close();

        for (int j = 0; j < tamanhoArray; j++) {
            std::cout << pessoas[j].getNome() << std::endl; /**< Imprime o nome de cada pessoa no array. */
        }
    } else {
        std::cout << "Não foi possível acessar o arquivo.txt" << std::endl;
    }

    return 0;
}
