#include "Empresa.h"
#include "Funcionario.h"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    Empresa empresa;
    
    int entrada;
    do {
        cout << "|          Menu inicial        |" << endl;
        cout << "________________________________" << endl;
        cout << "|    1 - Adicionar funcionario |" << endl;
        cout << "|    2 - Listar funcionarios   |" << endl;
        cout << "|    3 - Ordenar funcionarios  |" << endl;
        cout << "|    4 - Sair                  |" << endl;
        cout << "________________________________" << endl;
        cout << "       Digite uma das opções    " << endl;
        cin >> entrada;
        if(entrada == 1){
            Funcionario funcionario;
            std::string nomeEntrada;
            cout << "Digite o nome do novo funcionário: " << endl;
            cin >> nomeEntrada;
            double salarioEntrada;
            cout << "Digite o salário do novo funcionário: " << endl;
            cin >> salarioEntrada;
            funcionario.setNome(nomeEntrada);
            funcionario.setSalario(salarioEntrada);
            empresa.adicionarFuncionario(funcionario);
            cout << "Funcionário cadastrado com sucesso!" << endl;
        } else if (entrada == 2){
            int entrada2;
            do {
                cout << "|      Listagem de funcionários     |" << endl;
                cout << "_____________________________________" << endl;
                cout << "|    1 - Listar todos               |" << endl;
                cout << "|    2 - Listar 3 maiores salários  |" << endl;
                cout << "|    3 - Listar 3 menores salários  |" << endl;
                cout << "|    4 - Sair                       |" << endl;
                cout << "_____________________________________" << endl;
                cout << "         Digite uma das opções       " << endl;
                cin >> entrada2;

                if(entrada2 == 1){
                    empresa.listarFuncionarios();
                    int entrada3;
                    do{
                        cout << "|        Menu funcionários     |" << endl;
                        cout << "________________________________" << endl;
                        cout << "|    1 - Aumentar salário      |" << endl;
                        cout << "|    2 - Sair                  |" << endl;
                        cout << "________________________________" << endl;
                        cout << "       Digite uma das opções    " << endl;
                        cin >> entrada3;

                        if(entrada3 == 1){
                            std::string nomeFuncionario;
                            cout << "Digite o nome do funcionário que você deseja aumentar o salário: " << endl;
                            cin >> nomeFuncionario;
                            int indiceDoFuncionario = empresa.localizarFuncionarioAReceberAumento(nomeFuncionario, 0);
                            if(indiceDoFuncionario == -1){
                                cout << "Funcionário não encontrado! Tente novamente." << endl;
                            } else {
                                int percAument;
                                cout << "Digite qual a porcentagem de aumento do salário: " << endl;
                                cin >> percAument;
                                empresa.localizarFuncionarioAReceberAumento(nomeFuncionario, percAument);
                                cout << "O funcionário recebeu o aumento!" << endl;
                            }
                        }
                    } while (entrada3 != 2);
                } else if(entrada2 == 2){
                    empresa.ordenarFuncionariosPorSalario();
                    empresa.imprimir3Ultimos();
                } else if(entrada2 == 3){
                    empresa.ordenarFuncionariosPorSalario();
                    empresa.imprimir3Primeiros();
                }
            }while (entrada2 != 4);
            
        } else if(entrada == 3){
            empresa.ordenarFuncionariosPorSalario();
            cout << "Funcionários ordenados com sucesso!" << endl;
            empresa.listarFuncionarios();
        }
    } while (entrada!=4);
    return 0;
}
