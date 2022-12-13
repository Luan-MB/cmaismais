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
    
std::string SalaAula::getNome() const {
	return this->nome;
}

void SalaAula::setNome(const std::string& nome){
	this->nome = nome;
}

unsigned int SalaAula::getCapacidade() const {
	return this->capacidade;
}

void SalaAula::setCapacidade(const unsigned int capacidade){
	this->capacidade = capacidade;
}

void SalaAula::adicionarDisciplina(Disciplina* disciplina) {
	disciplina->setSalaAula(this);
}

const std::list<Disciplina*>& SalaAula::getDisciplinas() const {
 	return disciplinasMinistradas;
}