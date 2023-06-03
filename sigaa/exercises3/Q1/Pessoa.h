#pragma once

#include <string>

/**
 * @brief Classe que representa uma Pessoa.
 */
class Pessoa {
private:
    std::string nome; /**< Nome da pessoa. */

public:
    /**
     * @brief Construtor padrão da classe Pessoa.
     */
    Pessoa();

    /**
     * @brief Construtor da classe Pessoa que recebe o nome como parâmetro.
     * @param nome O nome da pessoa.
     */
    Pessoa(const std::string& nome);

    /**
     * @brief Obtém o nome da pessoa.
     * @return O nome da pessoa.
     */
    std::string getNome() const;
};
