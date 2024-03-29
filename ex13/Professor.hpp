// Luan Machado Bernardt GRR20190363

#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP
#include "Pessoa.hpp"

class Professor : public Pessoa{
public:
   Professor(const std::string &nome, const unsigned long cpf,
             const unsigned int valorHora, const unsigned short cargaHoraria);
   ~Professor();
   void setValorHora(const unsigned int valorHora);
   unsigned int getValorHora() const;
   void setCargaHoraria(const unsigned short cargaHoraria);
   unsigned short getCargaHoraria() const;
   unsigned int getSalario() const;
 
protected:
   unsigned int valorHora;
   unsigned short cargaHoraria;
};
#endif
