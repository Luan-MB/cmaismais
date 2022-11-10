// Luan Machado Bernardt GRR20190363

#include "Disciplina.hpp"

Disciplina::Disciplina(Curso& curso)
	:curso{curso}, numAlunos{0} {
}

Disciplina::Disciplina(std::string nome, Curso& curso, Pessoa* professor)
	:nome{nome}, curso{curso}, numAlunos{0} {
		setProfessor(professor);
}

Disciplina::Disciplina(std::string nome, Curso& curso, unsigned int cargaHoraria, Pessoa* professor)
	:nome{nome}, curso{curso}, numAlunos{0} {
		setCargaHoraria(cargaHoraria);
		setProfessor(professor);
}

std::string Disciplina::getNome(){
	return nome;
}

void Disciplina::setNome(std::string novoNome){
	nome = novoNome;
}

Curso& Disciplina::getCurso() {
	return this->curso;
}

unsigned int Disciplina::getCargaHoraria(){
	return cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int novaCarga){
	cargaHoraria = novaCarga;
}

Pessoa* Disciplina::getProfessor(){
	return professor;
}

void Disciplina::setProfessor(Pessoa* prof){
	professor = prof;
}

std::string Disciplina::getNomeProfessor() {
	return professor->getNome();
}

bool Disciplina::adicionarAluno(Pessoa* aluno) {
	if (this->alunos.size() < 50) {
		this->alunos.push_back(aluno);
		return true;
	}
	return false;
}

void Disciplina::removeAluno(Pessoa* aluno) {
	this->alunos.remove(aluno);
	delete aluno;
}

void Disciplina::removeAluno(unsigned long cpf) {
	std::list<Pessoa*>::iterator it;

	for (it = this->alunos.begin(); it != this->alunos.end(); ++it) {
		if ((*it)->getCpf() == cpf) {
			this->alunos.erase(it);
			delete *it;
			break;
		}
	}
}

std::list<Pessoa*> Disciplina::getAlunos() {
	return this->alunos;
}