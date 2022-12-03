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

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int carga);

		Pessoa* getProfessor();
        void setProfessor(Pessoa* prof);

		SalaAula *getSalaAula();
		void setSalaAula(SalaAula* sala);

		void imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso);

		void adicionarConteudoMinistrado(std::string conteudo, unsigned short cargaHorariaConteudo);
		void removerConteudoMinistrado(unsigned long id);
        void imprimirConteudosMinistrados();
		std::list<ConteudoMinistrado*>& getConteudos();
		void limparConteudos();

	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Pessoa* professor;
		SalaAula* sala;
		std::list<ConteudoMinistrado*> conteudos;
};
#endif