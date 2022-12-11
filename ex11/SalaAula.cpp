// Luan Machado Bernardt GRR20190363

#include <iostream>

#include "SalaAula.hpp"
#include "Disciplina.hpp"

SalaAula::SalaAula(std::string nome, unsigned int capacidade)
	:nome{nome}, capacidade{capacidade} {
}

SalaAula::~SalaAula() {
    std::cerr << "Destruindo sala " << this->nome << std::endl;

    while(!this->disciplinasMinistradas.empty()) {
		std::list<Disciplina*>::iterator it{this->disciplinasMinistradas.begin()};
		(*it)->setSalaAula(nullptr);	
	}
}
    
std::string SalaAula::getNome(){
	return this->nome;
}

void SalaAula::setNome(std::string nome){
	this->nome = nome;
}

unsigned int SalaAula::getCapacidade(){
	return this->capacidade;
}

void SalaAula::setCapcidade(unsigned int capacidade){
	this->capacidade = capacidade;
}

void SalaAula::adicionarDisciplina(Disciplina* disciplina) {
	disciplina->setSalaAula(this);
}

std::list<Disciplina*>& SalaAula::getDisciplinas(){
 	return disciplinasMinistradas;
}