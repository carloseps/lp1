#include <iostream>

class Funcionario {
    private:
        std::string funcional;
        char depto;
        std::string nome;
        double salario;

    public:
        std::string getFuncional() const {
            return funcional;
        }

        void setFuncional(const std::string& novoValor) {
            funcional = novoValor;
        }

        char getDepto() const {
            return depto;
        }

        void setDepto(char& novoValor) {
            depto = novoValor;
        }

        std::string getNome() const {
            return nome;
        }

        void setNome(const std::string& novoValor) {
            nome = novoValor;
        }

        double getSalario() const {
            return salario;
        } 

        void setSalario(double novoValor) {
            salario = novoValor;
        }
};
