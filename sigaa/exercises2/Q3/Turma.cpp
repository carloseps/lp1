/**
@brief Documentação Questão3
@file Turma.cpp
@author Carlos Pinheiro - 20220030194
*/
#include "Turma.h"
#include <iostream>
#include <algorithm>

/**
@brief Construtor da classe Turma
@param capacidade = quantidade de alunos que a turma suporta
@return 
*/
Turma::Turma(int capacidade) {
    this->capacidade = capacidade;
    this->alunos = new std::list<Aluno*>();
}

//Destrutor da classe Turma
Turma::~Turma() {
    delete alunos;
}

/**
@brief Retorna a quantidade de vagas da turma
@param 
@return quantidade de vagas da turma
*/
int Turma::getVagas() const {
    return vagas;
}

/**
@brief Define a quantidade de alunos que a turma suporta
@param capacidade = quantidade de alunos que a turma suporta
@return void
*/
void Turma::setCapacidade(int capacidade) {
    this->capacidade = capacidade;
}

/**
@brief Retorna a quantidade de alunos que a turma suporta
@param 
@return quantidade de alunos que a turma suporta
*/
int Turma::getCapacidade() const {
    return capacidade;
}

/**
@brief Imprime cada elemento e seus atributos do list de alunos da turma
@param
@return void
*/
void Turma::imprimeAlunos() const {
    for (Aluno* a : *alunos) {
        std::cout << "Nome: " << a->getNome() << std::endl;
        std::cout << "Matrícula: " << a->getMatricula() << std::endl;
        std::cout << "Notas: " << a->getNota1() << ", " << a->getNota2() << ", " << a->getNota3() << std::endl;
        std::cout << "____________________________" << std::endl;
    }
}


