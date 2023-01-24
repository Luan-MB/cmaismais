// Luan Machado Bernardt GRR20190363

#include "ProfessorAdjunto.hpp"
#include <iostream>

ProfessorAdjunto::ProfessorAdjunto(const std::string &nome, const unsigned long cpf,
                    const unsigned int valorHora, const unsigned short cargaHoraria,
                    const std::string& pesquisa)
                : Professor{nome, cpf, valorHora, cargaHoraria}, pesquisa{pesquisa} {
}
 
ProfessorAdjunto::~ProfessorAdjunto(){

}
 
std::string ProfessorAdjunto::getLinhaPesquisa() const {
    return this->pesquisa;
}

void ProfessorAdjunto::setLinhaPesquisa(const std::string& pesquisa) {
    this->pesquisa = pesquisa;
}
        
unsigned int ProfessorAdjunto::getSalario() const {
    return Professor::getSalario() * 1.1;
}

