#include <iostream>
#include "Pessoa.hpp"

int main() {
    Pessoa p1;
    
    std::cin >> p1.cpf;
    std::cout << p1.validarCpf(p1.cpf) << std::endl;
    return 0;
}