/**
@brief Documentação Questão3
@file Aluno.cpp
@author Carlos Pinheiro - 20220030194
*/
#include "Aluno.h"

/**
@brief Construtor da classe Aluno
@param matricula = matricula do aluno, nome = nome do aluno, nota1 = nota do aluno na primeira prova, nota2= nota do aluno na segunda prova, nota3 = nota do aluno na terceira prova
@return 
*/
Aluno::Aluno(int matricula, std::string nome, float nota1, float nota2, float nota3) {
    this->matricula = matricula;
    this->nome = nome;
    this->nota1 = nota1;
    this->nota2 = nota2;
    this->nota3 = nota3;
}

//Destrutor da classe Aluno
Aluno::~Aluno() {}

/**
@brief Define a matricula do aluno
@param matricula = matricula do aluno
@return void
*/
void Aluno::setMatricula(int matricula) {
    this->matricula = matricula;
}

/**
@brief Retorna a matricula do aluno
@param 
@return matricula do aluno
*/
int Aluno::getMatricula() const {
    return this->matricula;
}

/**
@brief Define o nome do aluno
@param nome = nome do aluno
@return void
*/
void Aluno::setNome(std::string nome) {
    this->nome = nome;
}

/**
@brief Retorna o nome do aluno
@param 
@return nome do aluno
*/
std::string Aluno::getNome() const {
    return this->nome;
}

/**
@brief Define a primeira nota do aluno
@param nota = nota1 do aluno
@return void
*/
void Aluno::setNota1(float nota) {
    this->nota1 = nota;
}

/**
@brief Retorna a primeira nota do aluno
@param 
@return nota1 do aluno
*/
float Aluno::getNota1() const {
    return this->nota1;
}

/**
@brief Define a segunda nota do aluno
@param nota = nota2 do aluno
@return void
*/
void Aluno::setNota2(float nota) {
    this->nota2 = nota;
}

/**
@brief Retorna a segunda nota do aluno
@param 
@return nota2 do aluno
*/
float Aluno::getNota2() const {
    return this->nota2;
}

/**
@brief Define a terceira nota do aluno
@param nota = nota3 do aluno
@return void
*/
void Aluno::setNota3(float nota) {
    this->nota3 = nota;
}

/**
@brief Retorna a terceira nota do aluno
@param 
@return nota3 do aluno
*/
float Aluno::getNota3() const {
    return this->nota3;
}

/**
@brief Calcula a media do aluno
@param 
@return media do aluno obtida através da média aritmética
*/
float Aluno::calculaMedia() const {
    return (this->nota1 + this->nota2 + this->nota3) / 3.0;
}
