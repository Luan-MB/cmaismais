#include <iostream>
#include <list>

#include "Disciplina.hpp"
#include "Pessoa.hpp"
#include "Professor.hpp"
#include "ProfessorAdjunto.hpp"

int main(){
    ProfessorAdjunto p1{"João", 22222222222, 200, 20, "Banco de Dados"};
    Professor p2{"Maria", 11111111111, 200, 20};

    std::cout << p1.getNome() << '\t' << p1.getSalario() << std::endl;
    std::cout << p2.getNome() << '\t' << p2.getSalario() << std::endl;
    //ptr1 = &p2;
    
    return 0;
}