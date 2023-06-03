#pragma once

#include <string>

class Pessoa {
private:
    std::string nome;

public:
    Pessoa();
    Pessoa(const std::string& nome);
    std::string getNome() const;
};
