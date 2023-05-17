/**
@brief Documentação Questão1
@file 1.cpp
@author Carlos Pinheiro - 20220030194
*/
#include <iostream>

/**
@brief Funcao que calcula o n-ésimo termo da sequencia tribonacci
@param numero = indice do termo da sequencia
@return o numero correspondente ao indice informado
*/
int tribonacciRecursiva (int numero){
    if (numero == 0 || numero == 1){
        return 0;
    } else if(numero == 2){
        return 1;
    } else {
        return tribonacciRecursiva(numero - 1) + tribonacciRecursiva(numero - 2) + tribonacciRecursiva(numero - 3);
    }
}

/**
@brief Funcao que calcula o n-ésimo termo da sequencia tribonacci
@param numero = indice do termo da sequencia
@return o numero correspondente ao indice informado
*/
int tribonacciIterativa (int numero){
    if (numero == 0 || numero == 1){
        return 0;
    } else if(numero == 2){
        return 1;
    } else {
        int trib0 = 0, trib1 = 0, trib2 = 1, tribN;
        for (int i = 3; i <= numero; i++){
            tribN = trib0 + trib1 + trib2;
            trib0 = trib1;
            trib1 = trib2;
            trib2 = tribN;
        }
        return tribN;
    }
}

int main(int argc, char const *argv[]){
    int n1 = 3;
    int n2 = 5;
    int n3 = 6;
    int n4 = 7;

    //Testes
    std::cout << tribonacciRecursiva(n1) << std::endl;
    std::cout << tribonacciRecursiva(n2) << std::endl;
    std::cout << tribonacciRecursiva(n3) << std::endl;
    std::cout << tribonacciRecursiva(n4) << std::endl;
    std::cout << std::endl;
    std::cout << tribonacciIterativa(n1) << std::endl;
    std::cout << tribonacciIterativa(n2) << std::endl;
    std::cout << tribonacciIterativa(n3) << std::endl;
    std::cout << tribonacciIterativa(n4) << std::endl;
    return 0;
}
