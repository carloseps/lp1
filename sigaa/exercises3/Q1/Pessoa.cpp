#include "Pessoa.h"

Pessoa::Pessoa() {
    /**< Construtor padrão da classe Pessoa. */
}

Pessoa::Pessoa(const std::string& nome) {
    /**< Construtor da classe Pessoa que recebe o nome como parâmetro. */
    this->nome = nome; /**< Atribui o nome recebido ao atributo nome da classe. */
}

std::string Pessoa::getNome() const {
    /**< Retorna o nome da pessoa. */
    return nome;
}
