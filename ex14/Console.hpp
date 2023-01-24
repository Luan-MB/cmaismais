#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include "Disciplina.hpp"

class Console{
	public:
		virtual ~Console();
		static void imprimirDadosDisciplina(const Disciplina& disciplina);
};
#endif
