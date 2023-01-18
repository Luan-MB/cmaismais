#include <iostream>

#include "Professor.hpp"
#include "Engenheiro.hpp"
#include "ProfessorEngenheiro.hpp"

int main(){
	ProfessorEngenheiro pe{"Maria", 11111111111, 85, 40, 1234};

	std::cout << pe.getSalario() << std::endl;

	Professor* p{&pe};
	std::cout << p->getSalario() << std::endl;

	Engenheiro* e{&pe};
	std::cout << e->getSalario() << std::endl;

	return 0;
}
