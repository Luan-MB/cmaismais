#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>

class Pessoa {
    public:
        Pessoa();
        unsigned long getCpf();
        bool setCpf(unsigned long novoCpf);
        std::string getNome();
        void setNome(std::string novoNome);
        unsigned short int getIdade();
        void setIdade(unsigned short int novaIdade);
    
    private:
        bool validarCPF(unsigned long cpfTeste);
        std::string nome;
        unsigned long cpf;
        unsigned char idade;
};

#endif