#ifndef PESSOA_HPP
#define PESSOA_HPP

class Pessoa {
    private:
        bool validarCpf(unsigned long cpfTeste);

        char nome[50];
        unsigned long cpf;
        unsigned char idade;
};

#endif