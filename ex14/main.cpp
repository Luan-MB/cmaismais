#include <iostream>

#include "ProfessorAdjunto.hpp"
#include "Professor.hpp"
#include "Pessoa.hpp"

int main(){
    Pessoa* p{new ProfessorAdjunto{"Professor Pardal", 72131217900, 100, 40}};
    std::cout << p->getNome() << std::endl;

    delete p;
    return 0;
}
