#include <cmath>

#include "Retangulo.hpp"

unsigned int Retangulo::perimetro(unsigned int largura, unsigned int altura) {
    return (2 * (altura + largura));
}

unsigned int Retangulo::area(unsigned int largura, unsigned int altura) {
    return (altura * largura);
}

double Retangulo::diagonal(unsigned int largura, unsigned int altura) {
    return std::sqrt((double)(largura * largura + altura * altura));
}