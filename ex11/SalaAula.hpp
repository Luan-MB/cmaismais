// Luan Machado Bernardt GRR20190363

#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>

#include "Disciplina.hpp"

class SalaAula {

	friend void Disciplina::setSalaAula(SalaAula* salaAula);

	public:
		SalaAula(std::string nome, unsigned int capacidade);
		~SalaAula();
		
		std::string getNome() const;
		void setNome(const std::string& nome);

		unsigned int getCapacidade() const;
		void setCapacidade(const unsigned int capacidade);

		void adicionarDisciplina(Disciplina* disciplina);
		const std::list<Disciplina*>& getDisciplinas() const;
		
	private:
		std::string nome;
		unsigned int capacidade;
		std::list<Disciplina*> disciplinasMinistradas;
};
#endif