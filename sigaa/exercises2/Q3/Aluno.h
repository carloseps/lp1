//
// Created by carloseps on 01/05/2023.
//
#pragma once
#include <string>

class Aluno {
    private:
        int matricula;
        std::string nome;
        float nota1;
        float nota2;
        float nota3;
    
    public:
        Aluno(int matricula, std::string nome, float nota1, float nota2, float nota3);
        ~Aluno();

        void setMatricula(int matricula);
        int getMatricula() const;

        void setNome(std::string nome);
        std::string getNome() const;

        void setNota1(float nota);
        float getNota1() const;

        void setNota2(float nota);
        float getNota2() const;

        void setNota3(float nota);
        float getNota3() const;

        float calculaMedia() const;
};
