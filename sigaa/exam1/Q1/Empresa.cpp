#include "Empresa.h"
#include "Funcionario.h"
#include <iostream>

using namespace std;

Empresa::Empresa() : tamanho(0), capacidade(1) {
    funcionarios = new Funcionario[capacidade];
}

Empresa::~Empresa() {
    if (funcionarios != nullptr) {
        delete[] funcionarios;
    }
}

int Empresa::localizarFuncionarioAReceberAumento(std::string nome, int percAumento){
    for (int i = 0; i < tamanho; i++){
        if(funcionarios[i].getNome() == nome){
            if(percAumento == 0){
                return i;
            } else {
                Funcionario funcionarioAumento;
                funcionarioAumento = funcionarios[i];
                funcionarioAumento.aumentarSalario(percAumento);
                funcionarios[i] = funcionarioAumento;
            }
        }
    }
    return -1;
}

void Empresa::listarFuncionarios() {
    for (int i = 0; i < tamanho; i++) {
        std::cout << funcionarios[i] << std::endl;
    }
}

void Empresa::imprimir3Primeiros() {
    for (int i = 0; i < 3; i++) {
        std::cout << funcionarios[i] << std::endl;
    }
}

void Empresa::imprimir3Ultimos() {
    for (int i = tamanho-3; i < tamanho; i++) {
        std::cout << funcionarios[i] << std::endl;
    }
}

void Empresa::ordenarFuncionariosPorSalario() {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMenor = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (funcionarios[j].getSalario() < funcionarios[indiceMenor].getSalario()) {
                indiceMenor = j;
            }
        }
        if (indiceMenor != i) {
            Funcionario aux = funcionarios[i];
            funcionarios[i] = funcionarios[indiceMenor];
            funcionarios[indiceMenor] = aux;
        }
    }
}

void Empresa::adicionarFuncionario(const Funcionario& funcionario) {
    if (this->tamanho == this->capacidade) {
        this->capacidade++;
        Funcionario* novoArray = new Funcionario[this->capacidade];
        for (int i = 0; i < this->tamanho; i++) {
            novoArray[i] = this->funcionarios[i];
        }
        delete[] this->funcionarios;
        this->funcionarios = novoArray;
    }
    this->funcionarios[tamanho++] = funcionario;
}
