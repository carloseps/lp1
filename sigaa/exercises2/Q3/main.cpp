/**
@brief Documentação Questão3
@file main.cpp
@author Carlos Pinheiro - 20220030194
*/
#include "Aluno.h"
#include "Turma.h"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//Array com nomes para serem usados a fim de teste como atributo ´nome´ dos alunos
string nomes[50] = {"Ana", "Bianca", "Carlos", "Daniel", "Eduarda", "Fabio", "Gabriela", "Henrique", "Isabela", "João",
                        "Karen", "Lucas", "Mariana", "Natalia", "Oscar", "Pedro", "Quintino", "Raquel", "Sofia", "Tomas",
                        "Ubiratan", "Valentina", "Wagner", "Xavier", "Yuri", "Zilda", "Aline", "Bruno", "Cristina", "Diego",
                        "Elias", "Fernanda", "Gustavo", "Helena", "Ivan", "Julia", "Karina", "Leonardo", "Marta", "Nelson",
                        "Olga", "Paulo", "Queila", "Rafael", "Samantha", "Thiago", "Ulisses", "Vanessa", "Wilma", "Yago"};

/**
@brief Funcao que aloca os alunos da classe Turma criando novos objetos Aluno e os adicionando à lista
@param 
@return void
*/
void Turma::alocaAlunos() {
    for (int i = 0; i < capacidade; i++) {
        int matricula = (i*10) + 100;
        string nome = nomes[i];
        float nota1 = (float) (rand() % 101) / 10;
        float nota2 = (float) (rand() % 101) / 10;
        float nota3 = (float) (rand() % 101) / 10;

        Aluno* aluno = new Aluno(matricula, nome, nota1, nota2, nota3);
        alunos->push_back(aluno);
    }
}

/**
@brief Funcao que ordena a lista de alunos da classe Turma usando Selection Sort
@param campo = criterio de ordenação, por qual campo deverá ser ordenada a lista
@return void
*/
void Turma::ordenaCampo(string campo){
    if (campo == "matricula") {
        for (auto i = alunos->begin(); i != alunos->end(); ++i) {
            auto min = i;
            for (auto j = i; j != alunos->end(); ++j) {
                if ((*j)->getMatricula() < (*min)->getMatricula()) {
                    min = j;
                }
            }
            swap(*i, *min);
        }
    } else if (campo == "nome"){
        for (auto i = alunos->begin(); i != alunos->end(); ++i) {
            auto min = i;
            for (auto j = i; j != alunos->end(); ++j) {
                if ((*j)->getNome() < (*min)->getNome()) {
                    min = j;
                }
            }
            swap(*i, *min);
        }
    } else if (campo == "nota"){
        for (auto i = alunos->begin(); i != alunos->end(); ++i) {
            auto min = i;
            for (auto j = i; j != alunos->end(); ++j) {
                if ((*j)->calculaMedia() < (*min)->calculaMedia()) {
                    min = j;
                }
            }
            swap(*i, *min);
        }
    }
}

int main(int argc, char const *argv[]) {
    Turma turma(8);
    turma.alocaAlunos();
    
    int entrada;
    do {
        cout << "|      Menu inicial      |" << endl;
        cout << "__________________________" << endl;
        cout << "|    1 - Listar alunos   |" << endl;
        cout << "|    2 - Ordenar alunos  |" << endl;
        cout << "|    3 - Sair            |" << endl;
        cout << "__________________________" << endl;
        cout << "   Digite uma das opções  " << endl;
        cin >> entrada;
        if(entrada == 1){
            turma.imprimeAlunos();
        } else if(entrada == 2){
            int entrada2;
            do {
                cout << "|      Ordenar por       |" << endl;
                cout << "__________________________" << endl;
                cout << "|    1 - Matricula       |" << endl;
                cout << "|    2 - Nome            |" << endl;
                cout << "|    3 - Nota            |" << endl;
                cout << "|    4 - Sair            |" << endl;
                cout << "__________________________" << endl;
                cout << "   Digite uma das opções  " << endl;
                cin >> entrada2;
                if(entrada2 == 1){
                    turma.ordenaCampo("matricula");
                    turma.imprimeAlunos();
                    cout << "Lista ordenada com sucesso!\n" << endl;
                    entrada2 = 4;
                } else if (entrada2 == 2){
                    turma.ordenaCampo("nome");
                    turma.imprimeAlunos();
                    cout << "Lista ordenada com sucesso!\n" << endl;
                    entrada2 = 4;
                } else if (entrada2 == 3){
                    turma.ordenaCampo("nota");
                    turma.imprimeAlunos();
                    cout << "Lista ordenada com sucesso!\n" << endl;
                    entrada2 = 4;
                } else {
                    cout << "Informe uma opção válida" << endl;
                }
            } while (entrada2 != 4);

        }
    } while (entrada!=3);
    return 0;
}
