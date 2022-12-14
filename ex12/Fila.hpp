// Luan Machado Bernardt GRR20190363

#pragma once
    
#include <iostream>

template <typename T, std::size_t MAX_SIZE>

class Fila {
    public:
        Fila()
            :inicio{0}, fim{0} {
        }

        ~Fila() {
        }

        bool empty() {
            return(this->inicio == this->fim);
        }

        bool full() {
            return(((this->inicio + MAX_SIZE) == this->fim));
        }

        bool remove(T* const elemento) {
            if (this->empty())
                return false;
            *elemento = this->fila[this->inicio % MAX_SIZE];
            this->inicio++;
            return true;
        }

        bool append(const T elemento) {
            if (this->full()) {
                return false;
            }
            this->fila[this->fim % MAX_SIZE] = elemento;
            this->fim++;
            return true;
        }

    private:
        int inicio;
        int fim;
        T fila[MAX_SIZE];
};