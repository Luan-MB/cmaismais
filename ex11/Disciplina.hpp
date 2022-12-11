// Luan Machado Bernardt GRR20190363

#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "Pessoa.hpp"
#include "ConteudoMinistrado.hpp"

class SalaAula;

class Disciplina{

	public:
		Disciplina(std::string nome);
		Disciplina(std::string nome, SalaAula* sala);
		~Disciplina();

		std::string getNome() const;
		void setNome(const std::string& nome);
		
		int getCargaHoraria() const;
		void setCargaHoraria(unsigned int carga);

		const Pessoa* getProfessor() const;
        void setProfessor(Pessoa* prof);

		const SalaAula *getSalaAula() const;
		void setSalaAula(SalaAula* sala);

		bool adicionarAluno(Pessoa*);
		void removeAluno(Pessoa*);
		void removeAluno(unsigned long);
		const std::list<Pessoa*> getAlunos() const;

		void imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso) const ;

		void adicionarConteudoMinistrado(std::string conteudo, unsigned short cargaHorariaConteudo);
		void removerConteudoMinistrado(unsigned long id);
        void imprimirConteudosMinistrados();
		const std::list<ConteudoMinistrado*>& getConteudos() const;
		void limparConteudos();

	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Pessoa* professor;
		SalaAula* sala;
		std::list<Pessoa*> alunos;
		std::list<ConteudoMinistrado*> conteudos;
};
#endif