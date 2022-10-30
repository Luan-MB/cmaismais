// Luan Machado Bernardt GRR20190363

#include <cmath>

#include "Retangulo.hpp"

Retangulo::Retangulo()
    :altura{1}, largura{1} {
}

Retangulo::Retangulo(int largura, int altura) {
    setLargura(largura);
    setAltura(altura);
}

void Retangulo::setLargura(int newLargura) {
    if (newLargura > 0) {
        largura = newLargura;
        return;
    }
    largura = 1;
}

int Retangulo::getLargura() {
    return largura;
}

void Retangulo::setAltura(int newAltura) {
    if (newAltura > 0) {
        altura = newAltura;
        return;
    }
    altura = 1;
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