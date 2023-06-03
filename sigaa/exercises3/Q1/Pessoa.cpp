#include "Pessoa.h"

Pessoa::Pessoa(){

}

Pessoa::Pessoa(const std::string& nome) {
    this->nome = nome;
}

std::string Pessoa::getNome() const {
    return nome;
}
