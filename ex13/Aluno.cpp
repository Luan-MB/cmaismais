// Luan Machado Bernardt GRR20190363

#include "Aluno.hpp"
#include <iostream>

Aluno::Aluno(const std::string &nome, const unsigned long cpf,
    const unsigned int grr)
    : Pessoa{nome, cpf}, grr{grr} {
    }
        
Aluno::~Aluno() {};

unsigned int Aluno::getGrr() {
    return this->grr;
}
    
void Aluno::setGrr(unsigned int grr) {
    this->grr = grr;
}
    
unsigned short Aluno::getIra() {
    return this->ira;
}
    
void Aluno::setIra(unsigned short ira) {
    this->ira = ira;
}