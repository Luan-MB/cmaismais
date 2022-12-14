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
	delete retorno;
	f.append(new Pessoa{"Pitagoras"});
	f.append(new Pessoa{"Democrito"});

	std::cout << "Fim\n";

	return 0;
}
