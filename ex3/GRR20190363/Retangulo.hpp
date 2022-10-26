// Luan machado Bernardt GRR20190363

#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo {
    public:
        bool setLargura(int newLargura);
        int getLargura();
        bool setAltura(int newAltura);
        int getAltura();
        int perimetro(int largura, int altura);
        int area(int largura, int altura);
        double diagonal(int largura, int altura);
        
    private:
        int largura;
        int altura;
    
};

#endif