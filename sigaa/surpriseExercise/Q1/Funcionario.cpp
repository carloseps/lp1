#include "Funcionario.h"

Funcionario::Funcionario(){
    this->nome = "";
    this->salario = 0;
}

Funcionario::Funcionario(std::string nome, double salario){
    this->nome = nome;
    this->salario = salario;
}

Funcionario::~Funcionario(){}

std::string Funcionario::getNome() const{
    return nome;
}

void Funcionario::setNome(const std::string nome){
    this->nome = nome;
}

double Funcionario::getSalario() const{
    return salario;
}

void Funcionario::setSalario(double salario){
    this->salario = salario;
}

void Funcionario::aumentarSalario(int percAumento){
    if (percAumento <= 10){
        (*this)++;
    } else {
        this->salario+=((percAumento/100)*salario);
    }
}
