#include <iostream>
#include <list>

#include "Ementa.hpp"
#include "Disciplina.hpp"
#include "Console.hpp"
#include "ProfessorAdjunto.hpp"
#include "Professor.hpp"

int main(void) {
    ufpr::CPF cpf{8286853989}; // Cria cpf a partir de unsigned long
    std::string cpfString{cpf}; // Cria uma string a partir do cpf (faz o casting)
    std::cout << cpfString << std::endl;

   return 0;
}
