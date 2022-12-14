#include <iostream>

#include "Fila.hpp"
#include "Pessoa.hpp"

int main(){
	Pessoa* retorno;
	
	Fila<Pessoa*, 5> f;

	f.append(new Pessoa{"Tales"});
	f.append(new Pessoa{"Heraclito"});
	f.append(new Pessoa{"Anaximenes"});
	f.append(new Pessoa{"Parmenides"});
	f.remove(&retorno);
	f.append(new Pessoa{"Pitagoras"});
	f.append(new Pessoa{"Democrito"});

	while (!f.empty()) {
		f.remove(&retorno);
		std::cout << retorno->getNome() << "\n";
	}

	std::cout << "Fim\n";

	return 0;
}
