#include <iostream>

#include "Retangulo.hpp"

#define NUM 3

int main() {
    
    Retangulo rets[NUM];

    for (int i{0}; i<NUM; ++i) {
        std::cout << "--- Dimensoes retangulo " << i+1 << std::endl;
        int altura, largura;
        std::cout << "Altura: ";
        std::cin >> altura;
        while (!rets[i].setAltura(altura)) {
            std::cout << "Altura invalida, insira novamente: " << std::endl;
            std::cin >> altura;
        } 
        
        std::cout << "Largura: ";
        std::cin >> largura;
        while (!rets[i].setLargura(largura)) {
            std::cout << "Largura invalida, insira novamente: " << std::endl;
            std::cin >> largura;
        } 

        rets[i].setLargura(largura);
        std::cout << "Area: " << rets[i].area(rets[i].getLargura(), rets[i].getAltura()) << std::endl;
        std::cout << "Perimetro: " << rets[i].perimetro(rets[i].getLargura(), rets[i].getAltura()) << std::endl;
        std::cout << "Diagonal: " << rets[i].diagonal(rets[i].getLargura(), rets[i].getAltura()) << std::endl;
    }

    return 0; 
}