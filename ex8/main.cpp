#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "SalaAula.hpp"


int main(){

	SalaAula sala{"Lab Info 1", 20};
	SalaAula sala2{"PA-07", 40};

	Pessoa prof1{"João", 11111111111, 40};
	Disciplina dis1{"Orientacao a Objetos", &sala};
	dis1.setProfessor(&prof1);

	Pessoa prof2{"Maria", 22222222222, 30};	
	Disciplina dis2{"Sistemas Operacionais", &sala};
	dis2.setProfessor(&prof2);

	Pessoa prof3{"Paulo", 33333333333, 30};	
	Disciplina dis3{"C++", &sala};
	dis3.setProfessor(&prof3);

	for (Disciplina* disciplina: sala.getDisciplinas()) {
		std::cout << disciplina->getNome() << '\t' << disciplina->getSalaAula()->getNome() << std::endl;
	}

	dis2.setSalaAula(&sala2);
	sala2.adicionarDisciplina(&dis3);

	for (Disciplina* disciplina: sala.getDisciplinas()) {
		std::cout << disciplina->getNome() << '\t' << disciplina->getSalaAula()->getNome() << std::endl;
	}

	for (Disciplina* disciplina: sala2.getDisciplinas()) {
		std::cout << disciplina->getNome() << '\t' << disciplina->getSalaAula()->getNome() << std::endl;
	}

	return 0;
}
