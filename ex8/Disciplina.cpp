#include "Disciplina.hpp"
#include "SalaAula.hpp"

#include <iostream>

Disciplina::Disciplina(std::string nome)
	:nome{nome}, sala{nullptr} {
}

Disciplina::Disciplina(std::string nome, SalaAula* sala)
    :nome{nome} {
    this->setSalaAula(sala);
}

std::string Disciplina::getNome(){  
	return nome;
}

void Disciplina::setNome(std::string nome){
	this->nome = nome;
}

int Disciplina::getCargaHoraria(){
	return this->cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int carga){
	this->cargaHoraria = carga;
}

Pessoa* Disciplina::getProfessor(){
    return this->professor;
}

void Disciplina::setProfessor(Pessoa* prof){
    this->professor = prof;
}

SalaAula* Disciplina::getSalaAula() {
    return this->sala;
}

void Disciplina::setSalaAula(SalaAula* sala){
    if (this->sala != nullptr)
        this->sala->disciplinasMinistradas.remove(this);
    sala->disciplinasMinistradas.push_back(this);
    this->sala = sala;
}


void Disciplina::imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso){
    double pctCurso = (double)this->cargaHoraria/cargaTotalCurso;
    pctCurso = pctCurso * 100;
    std::cout << cabecalho << std::endl;
    std::cout << "Disciplina: " << this->nome << std::endl;
    std::cout << "Carga: " << this->cargaHoraria << std::endl;
    std::cout << "Porcentagem do curso: " << pctCurso << "%" << std::endl;
    std::cout << "Professor: " << this->professor->getNome() << std::endl;
}