#include <cmath>

#include "Retangulo.hpp"

bool Retangulo::setLargura(int newLargura) {
    if (newLargura > 0) {
        largura = newLargura;
        return true;
    }
    return false;
}

int Retangulo::getLargura() {
    return largura;
}

bool Retangulo::setAltura(int newAltura) {
    if (newAltura > 0) {
        altura = newAltura;
        return true;
    }
    return false;
}

int Retangulo::getAltura() {
    return altura;
}

int Retangulo::perimetro(int largura, int altura) {
    return (2 * (altura + largura));
}

int Retangulo::area(int largura, int altura) {
    return (altura * largura);
}

double Retangulo::diagonal(int largura, int altura) {
    return std::sqrt((double)(largura * largura + altura * altura));
}