//
// Created by carloseps on 01/05/2023.
//
#pragma once 
#include "Aluno.h"
#include <list>
#include <string>

class Turma {
    private:
        int capacidade;
        int vagas;
        std::list<Aluno*>* alunos;
    
    public:
        Turma(int capacidade);
        ~Turma();

        void setCapacidade(int capacidade);
        int getCapacidade() const;

        void setVagas(int vagas);
        int getVagas() const;

        void alocaAlunos();

        void imprimeAlunos() const;

        void ordenaCampo(std::string campo);
};
