#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa{
    public:
        Pessoa();
        Pessoa(std::string, unsigned long, unsigned short);

        unsigned long getCpf();
        void setCpf(unsigned long);

        std::string getNome();
        void setNome(std::string);

        unsigned short int getIdade();
        void setIdade(unsigned short);
    private:
        bool validarCPF(unsigned long);

        std::string nome;
        unsigned long cpf;
        unsigned char idade;
};
#endif