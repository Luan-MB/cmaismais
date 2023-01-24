// Luan machado Bernardt GRR20190363

#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo {
    public:
        Retangulo();
        Retangulo(int largura, int altura = 1);

        void setLargura(int newLargura);
        int getLargura();
        void setAltura(int newAltura);
        int getAltura();
        int perimetro(int largura, int altura);
        int area(int largura, int altura);
        double diagonal(int largura, int altura);
        static unsigned int getRetangulosCriados() {
            return retangulosCriados;
        };
        
    private:
        static unsigned int retangulosCriados;

        int largura;
        int altura;
    
};

#endif