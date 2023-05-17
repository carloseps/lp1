#pragma once

#include <string>
#include "Funcionario.h"

using namespace std;

class Empresa {
    private:
        Funcionario* funcionarios;
        int tamanho;
        int capacidade;
    
    public:
        Empresa();
        ~Empresa();

        int getCapacidade() const;
        Funcionario* getFuncionarios() const { return funcionarios; }

        void adicionarFuncionario(const Funcionario& funcionario);
        int localizarFuncionarioAReceberAumento(std::string nome, int percAumento);
        void ordenarFuncionariosPorSalario();
        void listarFuncionarios();

        void imprimir3Primeiros();
        void imprimir3Ultimos();

};
