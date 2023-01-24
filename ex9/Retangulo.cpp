// Luan machado Bernardt GRR20190363

#include <cmath>

#include "Retangulo.hpp"

unsigned int Retangulo::retangulosCriados{0};

Retangulo::Retangulo()
    :altura{1}, largura{1} {
    Retangulo::retangulosCriados++;
}

Retangulo::Retangulo(int largura, int altura) {
    setLargura(largura);
    setAltura(altura);
    Retangulo::retangulosCriados++;
}

void Retangulo::setLargura(int largura) {
    if (largura > 0) {
        this->largura = largura;
        return;
    }
    this->largura = 1;
}

int Retangulo::getLargura() {
    return largura;
}

void Retangulo::setAltura(int altura) {
    if (altura > 0) {
        this->altura = altura;
        return;
    }
    this->altura = 1;
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
