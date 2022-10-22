#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo {
    public:
        unsigned int largura;
        unsigned int altura;

        unsigned int perimetro(unsigned int largura, unsigned int altura);
        unsigned int area(unsigned int largura, unsigned int altura);
        double diagonal(unsigned int largura, unsigned int altura);
};

#endif