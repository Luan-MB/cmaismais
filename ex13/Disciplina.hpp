// Luan Machado Bernardt GRR20190363

#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include <string>
#include <list>

#include "Professor.hpp"
#include "Aluno.hpp"

class Disciplina{
	public:
		Disciplina();
		Disciplina(const std::string& nome);

		~Disciplina();

		const std::string& getNome() const;
		void setNome(const std::string& nome);
		
		int getCargaHoraria() const;
		void setCargaHoraria(const unsigned int carga);

		const Professor* getProfessor() const;
        void setProfessor(Professor* const prof);

		void imprimirDados(const std::string& cabecalho, const unsigned int cargaTotalCurso) const;

		void adicionarAluno(Aluno* const aluno);
		void removerAluno(Aluno* const aluno);
		void removerAluno(const unsigned long cpf);
		const std::list<Aluno*>& getAlunos() const;
		void imprimirAlunos();

	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Professor* professor;

		std::list<Aluno*> alunos;
};
#endif