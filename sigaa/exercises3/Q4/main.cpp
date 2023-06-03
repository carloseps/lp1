#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdio>
#include "Funcionario.h"

Funcionario* funcionarios;

void copia_dados(std::ifstream* file, int n, Funcionario* funcionarios) {
    std::string funcional, nome;
    char depto;
    double salario;
    int contador = 0;
    while (*file >> funcional >> nome >> depto >> salario) {
        Funcionario funcionario;
        funcionario.setFuncional(funcional);
        funcionario.setNome(nome);
        funcionario.setDepto(depto);
        funcionario.setSalario(salario);
        funcionarios[contador] = funcionario;
        contador++;
        if (contador == n) {
            break;
        }
    }
    if (contador < n) {
        std::cout << "Erro: o arquivo nao possui dados suficientes." << std::endl;
    }
}

void imprime_folha_pagamento(int n, Funcionario* funcionarios, char depto){
    std::cout << "FOLHA DE PAGAMENTO DEPTO " << depto << std::endl;
    std::cout << "FUNCIONAL\t" << "NOME\t" << "DEPTO\t" << "SALÁRIO" << std::endl;
    int contador = 0;
    double somaSalarioDepto = 0;
    while (contador <= n){
        if((funcionarios[contador].getDepto()) == depto){
            std::cout << funcionarios[contador].getFuncional() << '\t' << funcionarios[contador].getNome() << '\t' << funcionarios[contador].getDepto() << '\t' << funcionarios[contador].getSalario() << std::endl;
            somaSalarioDepto += funcionarios[contador].getSalario();
        }
        contador++;
    }
    std::cout << "VALOR TOTAL: R$ " << somaSalarioDepto << "\n" << std::endl;
}

int main() {
    std::ifstream file("arquivoASerLido.txt");

    if (!file) {
        std::cout << "Não foi possível abrir o arquivo!" << std::endl;
        return -1;
    }
    std::string linha;

    int qtdFuncionarios;
    if(std::getline(file, linha)){
        std::istringstream istrstream(linha);
        istrstream >> qtdFuncionarios;
    }

    funcionarios = new Funcionario[qtdFuncionarios];

    copia_dados(&file, qtdFuncionarios, funcionarios);

    file.close();

    imprime_folha_pagamento(qtdFuncionarios, funcionarios, 'A');
    imprime_folha_pagamento(qtdFuncionarios, funcionarios, 'B');
    imprime_folha_pagamento(qtdFuncionarios, funcionarios, 'C');

    return 0;
}
