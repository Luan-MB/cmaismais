#ifndef PROFESSOR_ADJUNTO_HPP
#define PROFESSOR_ADJUNTO_HPP

#include "Professor.hpp"
#include <string>

class ProfessorAdjunto : public Professor {
    public:
        ProfessorAdjunto(const std::string &nome, const unsigned long cpf,
                const unsigned int salario, const unsigned short cargaHoraria, 
                const std::string& pesquisa);

        ~ProfessorAdjunto();

        std::string getLinhaPesquisa() const;
        void setLinhaPesquisa(const std::string& pesquisa);

        unsigned int getSalario() const;
    private:
        std::string pesquisa;
};
#endif