// Luan Machado Bernardt GRR20190363

#include "Curso.hpp"

Curso::Curso(std::string nome, unsigned short ano, unsigned int cargaHoraria)
    :nome{nome} {
        setAno(ano);
        setCargaHoraria(cargaHoraria);
}

void Curso::setNome(std::string nome) {
    this->nome = nome;
}

std::string Curso::getNome() {
    return this->nome;
}

void Curso::setAno(unsigned short ano) {
    this->ano = ano;
}

unsigned short Curso::getAno() {
    return this->ano;
}

void Curso::setCargaHoraria(unsigned int cargaHoraria) {
    this->cargaHoraria = cargaHoraria;
}

unsigned int Curso::getCargaHoraria() {
    return this->cargaHoraria;
}
