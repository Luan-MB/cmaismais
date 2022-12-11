// Luan Machado Bernardt GRR20190363

#ifndef CURSO_H
#define CURSO_H

#include <string>

class Curso {
    public:
        Curso();
        Curso(std::string, unsigned short, unsigned int);
        ~Curso();

        std::string getNome() const;
        void setNome(std::string);

        unsigned short getAno() const;
        void setAno(unsigned short);

        unsigned int getCargaHoraria() const;
        void setCargaHoraria(unsigned int);

    private:
        std::string nome;
        unsigned short ano;
        unsigned int cargaHoraria;

};

#endif