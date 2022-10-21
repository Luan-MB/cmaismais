#include "Retangulo.hpp"

unsigned int Retangulo::perimetro() {
    return (2 * (this->altura + this->largura));
}

unsigned int Retangulo::area() {
    return (this->altura * this->largura);
}