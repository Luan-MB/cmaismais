// Luan Machado Bernardt GRR20190363

#pragma once

#include <string>

class Pessoa{
    public:
        Pessoa();
        Pessoa(std::string nome);
        Pessoa(std::string nome, unsigned long cpf, unsigned short int idade);

        ~Pessoa();

        unsigned long getCpf();
        void setCpf(unsigned long cpf);

        std::string getNome() const;
        void setNome(std::string nome);

        unsigned short int getIdade();
        void setIdade(unsigned short int idade);

        void imprimirEnderecoMemoria();
    private:
        bool validarCPF(unsigned long cpfTeste);

        std::string nome;
        unsigned long cpf;
        unsigned char idade;
};