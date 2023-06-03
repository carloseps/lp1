#include <iostream>

class Funcionario {
    private:
        std::string funcional; /**< O número funcional do funcionário. */
        char depto; /**< O departamento do funcionário. */
        std::string nome; /**< O nome do funcionário. */
        double salario; /**< O salário do funcionário. */

    public:
        /**
         * @brief Obtém o número funcional do funcionário.
         * @return O número funcional.
         */
        std::string getFuncional() const {
            return funcional;
        }

        /**
         * @brief Define o número funcional do funcionário.
         * @param novoValor O novo número funcional.
         */
        void setFuncional(const std::string& novoValor) {
            funcional = novoValor;
        }

        /**
         * @brief Obtém o departamento do funcionário.
         * @return O departamento.
         */
        char getDepto() const {
            return depto;
        }

        /**
         * @brief Define o departamento do funcionário.
         * @param novoValor O novo departamento.
         */
        void setDepto(char& novoValor) {
            depto = novoValor;
        }

        /**
         * @brief Obtém o nome do funcionário.
         * @return O nome.
         */
        std::string getNome() const {
            return nome;
        }

        /**
         * @brief Define o nome do funcionário.
         * @param novoValor O novo nome.
         */
        void setNome(const std::string& novoValor) {
            nome = novoValor;
        }

        /**
         * @brief Obtém o salário do funcionário.
         * @return O salário.
         */
        double getSalario() const {
            return salario;
        } 

        /**
         * @brief Define o salário do funcionário.
         * @param novoValor O novo salário.
         */
        void setSalario(double novoValor) {
            salario = novoValor;
        }
};
