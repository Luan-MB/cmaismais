// Luan Machado Bernardt GRR20190363

#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

#include "Pessoa.hpp"

class Disciplina { 
	public:
		Disciplina(std::string nomeDisciplina, Pessoa *professor);

		std::string getNome();
		void setNome(std::string novoNome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int novaCarga);

		Pessoa* getProfessor();
		void setProfessor(Pessoa* prof);

		std::string getNomeProfessor();

		bool adicionarAluno(Pessoa* aluno);
		Pessoa** getVetorAlunos();

		int getNumAlunos();
		
	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Pessoa *professor;
		Pessoa *alunos[50];
		unsigned int numAlunos;
};
#endif
