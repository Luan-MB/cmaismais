// Luan Machado Bernardt GRR20190363

#include "Disciplina.hpp"

#include <iostream>

Disciplina::Disciplina(const std::string& nome)
	:nome{nome} {
}

Disciplina::~Disciplina(){
    std::cerr << "Destruindo a disciplina " << this->nome << "\n";
    
    std::list<Aluno*>::iterator it{this->alunos.begin()};
    while (it != this->alunos.end()) {
        delete *it;
        it = this->alunos.erase(it);
    }
}

const std::string& Disciplina::getNome() const{
	return nome;
}

void Disciplina::setNome(const std::string& nome){
	this->nome = nome;
}

int Disciplina::getCargaHoraria() const{
	return this->cargaHoraria;
}

void Disciplina::setCargaHoraria(const unsigned int carga){
	this->cargaHoraria = carga;
}

const Professor* Disciplina::getProfessor() const{
    return this->professor;
}

void Disciplina::setProfessor(Professor* const prof){
    this->professor = prof;
}

void Disciplina::imprimirDados(const std::string& cabecalho, const unsigned int cargaTotalCurso) const{
    double pctCurso = (double)this->cargaHoraria/cargaTotalCurso;
    pctCurso = pctCurso * 100;
    std::cout << cabecalho << std::endl;
    std::cout << "Disciplina: " << this->nome << std::endl;
    std::cout << "Carga: " << this->cargaHoraria << std::endl;
    std::cout << "Porcentagem do curso: " << pctCurso << "%" << std::endl;
    std::cout << "Professor: " << this->professor->getNome() << std::endl;
}

void Disciplina::adicionarAluno(Aluno* const aluno){
	this->alunos.push_back(aluno);
}

void Disciplina::removerAluno(Aluno* const aluno){
	this->alunos.remove(aluno);
}

void Disciplina::removerAluno(const unsigned long cpf){
	std::list<Aluno*>::iterator it;

	for(it = this->alunos.begin(); it != this->alunos.end(); it++)
		if((*it)->getCpf() == cpf)
			break;
	if(it != this->alunos.end())
		this->alunos.erase(it);
}

const std::list<Aluno*>& Disciplina::getAlunos() const{//retornamos uma referência para a lista, o que custa mais barato
	return this->alunos;
}

void Disciplina::imprimirAlunos() {
    std::list<Aluno*>::iterator it;
    for (it = alunos.begin(); it!=alunos.end(); ++it) {
        std::cout << '\t' << (*it)->getNome() << '\t'
            << "GRR" << (*it)->getGrr() << std::endl;
    }
}