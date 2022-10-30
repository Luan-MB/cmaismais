#include <iostream>

#include "Retangulo.hpp"

int main() {

    Retangulo r1{};
    Retangulo r2{10};
    Retangulo r3{10, 5};

    std::cout << "Retangulo inicializado com o construtor default: ";
    std::cout << "largura = " << r1.getLargura() << ", altura = " << r1.getAltura() << std::endl;
    std::cout << "Retangulo inicializado com o construtor com um parametro default: ";
    std::cout << "largura = " << r2.getLargura() << ", altura = " << r2.getAltura() << std::endl;
    std::cout << "Retangulo inicializado com o construtor com ambos os parametros: ";
    std::cout << "largura = " << r3.getLargura() << ", altura = " << r3.getAltura() << std::endl;
    return 1;
}