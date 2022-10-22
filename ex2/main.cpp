#include <iostream>

#include "Retangulo.hpp"

#define NUM 3

int main() {
    
    Retangulo rets[NUM];

    for (int i{0}; i<NUM; ++i) {
        std::cout << "--- Dimensoes triangulo " << i+1 << ": ";
        std::cin >> rets[i].altura >> rets[i].largura;
        std::cout << "Area: " << rets[i].area(rets[i].largura, rets[i].altura) << std::endl;
        std::cout << "Perimetro: " << rets[i].perimetro(rets[i].largura, rets[i].altura) << std::endl;
        std::cout << "Diagonal: " << rets[i].diagonal(rets[i].largura, rets[i].altura) << std::endl;
    }

    return 0; 
}