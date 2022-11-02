// Luan Machado Bernardt GRR20190363

#include "Disciplina.hpp"

Disciplina::Disciplina(std::string nomeDisciplina, Pessoa *pessoa)
	:nome{nomeDisciplina}, numAlunos{0} {
	setProfessor(pessoa);
}

std::string Disciplina::getNome(){
	return nome;
}

void Disciplina::setNome(std::string novoNome){
	nome = novoNome;
}

int Disciplina::getCargaHoraria(){
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

bool Disciplina::adicionarAluno(Pessoa *aluno) {
	if (numAlunos < 50) {
		alunos[numAlunos++] = aluno;
		return true;
	}
	return false;
}

Pessoa **Disciplina::getVetorAlunos() {
	return alunos;
}

int Disciplina::getNumAlunos() {
	return numAlunos;
}
