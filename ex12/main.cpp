#include <iostream>

#include "Fila.hpp"

int main(){
	int retorno;
	
	Fila<int, 5> f;

	f.append(1);
	f.append(2);
	f.append(3);
	f.append(5);
	f.remove(&retorno);
	f.append(8);
	f.append(13);

	while (!f.empty()) {
		f.remove(&retorno);
		std::cout << retorno << "\n";
	}

	std::cout << "Fim\n";

	return 0;
}
