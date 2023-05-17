#pragma once
#include <string>
#include <iostream>

using namespace std;

class Funcionario {
    private:
        std::string nome;
        double salario;
    
    public:
        Funcionario(std::string nome, double salario);
        Funcionario();
        ~Funcionario();

        void setNome(std::string nome);
        std::string getNome() const;

        void setSalario(double salario);
        double getSalario() const;

        void aumentarSalario(int percAumento);

        friend std::ostream& operator<<(std::ostream& os, const Funcionario& funcionario) {
            os << "Nome: " << funcionario.getNome() << ", Salário: R$ " << funcionario.getSalario() << std::endl;
            return os;
        }
        
        Funcionario operator++(int) {
            Funcionario aux = *this;
            this->salario *= 1.10;
            return aux;
        }
};


