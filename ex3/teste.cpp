#include "Pessoa.hpp"

#include <iostream>

int main () {
    Pessoa p1{"Joao", 14};

    std::cout << p1.getNome() << " " << p1.getIdade() << std::endl;
    return 1;
}