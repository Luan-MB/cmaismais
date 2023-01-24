// Luan Machado Bernardt GRR20190363

#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "Pessoa.hpp"

class Aluno : public Pessoa {
    public:
        Aluno(const std::string &nome, const unsigned long cpf, const unsigned int grr);
        ~Aluno();

        unsigned int getGrr();
        void setGrr(unsigned int grr);
        unsigned short getIra();
        void setIra(unsigned short ira);
    private:
        unsigned int grr;
        unsigned short ira;
};

#endif