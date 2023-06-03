#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

struct Aluno {
    std::string nome;
    double notas[3];
};

/**
 * @brief Calcula a média de um array de valores double.
 * @param array O array de valores double.
 * @param tamanho O tamanho do array.
 * @return A média dos valores.
 */
float calculaMedia(double array[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += array[i];
    }
    return (soma/(double)tamanho);
}

/**
 * @brief Calcula a situação de um aluno com base em suas notas.
 * @param aluno O aluno a ser avaliado.
 * @return A situação do aluno (Aprovado ou Reprovado).
 */
std::string calculaSituacao(Aluno aluno){
    if(calculaMedia(aluno.notas, 3) >= 7.0){
        return "Aprovado";
    } else return "Reprovado";
}

int main() {
    Aluno alunos[4];
    std::ifstream file("arquivoASerLido.txt");

    if (!file) {
        std::cout << "Não foi possível abrir o arquivo!" << std::endl;
        return -1;
    }

    std::string linha;
    int contador = 0;
    while (std::getline(file, linha)) {
        std::istringstream istrstream(linha);
        Aluno aluno;

        if (!(istrstream >> aluno.nome >> aluno.notas[0] >> aluno.notas[1] >> aluno.notas[2])) {
            std::cout << "Erro ao ler os dados do aluno." << std::endl;
            break;
        }
        alunos[contador] = aluno;
        contador++;
    }

    file.close();

    std::cout << "Array de alunos preenchido pelo arquivoASerLido.txt" << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << "Nome: " << alunos[i].nome << std::endl;
        std::cout << "Notas: ";
        std::cout << alunos[i].notas[0] << "    -    " << alunos[i].notas[1] << "    -    " << alunos[i].notas[2] << std::endl;
    }
    std::cout << std::endl;

    std::ofstream arquivoPreenchimento("arquivoASerPreenchido.txt");
    if (arquivoPreenchimento.is_open()) {
        for (int i = 0; i < 4; i++) {
            arquivoPreenchimento << alunos[i].nome << "      " << calculaMedia(alunos[i].notas, 3) << "      " << calculaSituacao(alunos[i]) << std::endl;
        }
    } else {
        std::cout << "Não foi possível acessar o arquivoASerPreenchido.txt" << std::endl;
    }
    return 0;
}
