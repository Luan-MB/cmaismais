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
        void setNome(const std::string& nome);

        unsigned short getAno() const;
        void setAno(const unsigned short ano);

        unsigned int getCargaHoraria() const;
        void setCargaHoraria(const unsigned int cargaHoraria);

    private:
        std::string nome;
        unsigned short ano;
        unsigned int cargaHoraria;

};

#endif