#include "Funcionario.h"
#include <iostream>
#include <fstream>
#include <string>

const std::string FILE_NAME = "file.dat";

Funcionario* funcionarios = new Funcionario[4];

int main(int argc, char const *argv[]) {
    Funcionario *funcionario1 = new Funcionario("Carlos", 2000);
    Funcionario *funcionario2 = new Funcionario("Eduardo", 3000);
    Funcionario *funcionario3 = new Funcionario("Pinheiro", 2000);
    Funcionario *funcionario4 = new Funcionario("Silva", 3000);;

    *(funcionarios) = (*funcionario1);
    *(funcionarios + 1) = (*funcionario2);
    *(funcionarios + 2) = (*funcionario3);
    *(funcionarios + 3) = (*funcionario4);

    std::cout << "Array de funcionários:\n" << std::endl;

    for (int i = 0; i < 4; i++) {
        cout << funcionarios[i] << endl;
    }
    
    std::fstream file;
    file.open(FILE_NAME, std::ios::out | std::ios::binary);

    if (!file) {
        std::cout << "Erro ao criar arquivo..." << std::endl;
        return -1;
    }
    
    file.write((char*)&funcionarios,sizeof(funcionarios));
	file.close();
	cout << "Dados salvos no arquivo.\n" << endl;

	Funcionario* listaDeFunc;

	file.open(FILE_NAME, std::ios::in | std::ios::binary);
	if(!file){
		cout << "Erro ao abrir arquivo...\n" << endl;
		return -1;
	}

    cout << "Dados recuperados do arquivo:\n" << endl;
	
	if(file.read((char*)&listaDeFunc, sizeof(listaDeFunc))){
        for(int i = 0; i < 4; i++){
            cout << funcionarios[i] << endl;
        }
        return 1;
	} else {
		cout << "Erro ao ler dado do arquivo...\n" << endl;
	}
	file.close();	

    return 0;
}
