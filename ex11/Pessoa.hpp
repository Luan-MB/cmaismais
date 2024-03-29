// Luan Machado Bernardt GRR20190363

#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa{
    public:
        Pessoa();
        Pessoa(std::string nome);
        Pessoa(std::string nome, unsigned long cpf, unsigned short int idade);

        ~Pessoa();

        unsigned long getCpf() const;
        void setCpf(const unsigned long& cpf);

        std::string getNome() const;
        void setNome(const std::string& nome);

        unsigned short int getIdade() const;
        void setIdade(const unsigned short int idade);

    private:
        bool validarCPF(unsigned long cpfTeste);

        std::string nome;
        unsigned long cpf;
        unsigned char idade;
};
#endif