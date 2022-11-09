// Luan Machado Bernardt GRR20190363

#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

#include "Pessoa.hpp"
#include "Curso.hpp"

class Disciplina { 
	public:
		Disciplina(Curso&);
		Disciplina(std::string, Curso&, Pessoa*);
		Disciplina(std::string, Curso&, unsigned int, Pessoa*);

		std::string getNome();
		void setNome(std::string);

		Curso& getCurso();
		
		unsigned int getCargaHoraria();
		void setCargaHoraria(unsigned int);

		Pessoa* getProfessor();
		void setProfessor(Pessoa*);

		std::string getNomeProfessor();

		bool adicionarAluno(Pessoa*);
		Pessoa** getVetorAlunos();

		int getNumAlunos();
		
	private:
		std::string nome;
		Curso& curso; 
		unsigned int cargaHoraria;
		Pessoa* professor;
		Pessoa* alunos[50];
		unsigned int numAlunos;
};
#endif
