// Luan Machado Bernardt GRR20190363

#include <iostream>

#include "Curso.hpp"

Curso::Curso() {}

Curso::Curso(std::string nome, unsigned short ano, unsigned int cargaHoraria)
    :nome{nome} {
        setAno(ano);
        setCargaHoraria(cargaHoraria);
}

Curso::~Curso() {
    std::cerr << "Destruindo curso " << this->nome << std::endl;
}

void Curso::setNome(const std::string& nome) {
    this->nome = nome;
}

std::string Curso::getNome() const {
    return this->nome;
}

void Curso::setAno(const unsigned short ano) {
    this->ano = ano;
}

unsigned short Curso::getAno() const {
    return this->ano;
}

void Curso::setCargaHoraria(const unsigned int cargaHoraria) {
    this->cargaHoraria = cargaHoraria;
}

unsigned int Curso::getCargaHoraria() const {
    return this->cargaHoraria;
}
