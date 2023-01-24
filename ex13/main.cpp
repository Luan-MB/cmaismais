// Luan Machado Bernardt GRR20190363

#include <iostream>
#include <list>

#include "Disciplina.hpp"
#include "Professor.hpp"
#include "Aluno.hpp"

int main(){

    Disciplina d1{"C++"};
    Professor p1{"Girafales", 11111111111, 200, 20};
    
    d1.setProfessor(&p1);

    Aluno a1{"Chaves", 00000000000, 20190363};
    Aluno a2{"Chiquinha", 22222222222, 20204532};
    Aluno a3{"Quico", 33333333333, 20193453};
    Aluno a4{"Godinez", 44444444444, 20197252};
    
    d1.adicionarAluno(&a1);
    d1.adicionarAluno(&a2);
    d1.adicionarAluno(&a3);
    d1.adicionarAluno(&a4);

    std::cout << d1.getNome() << std::endl;
    std::cout << "Professor: " << d1.getProfessor()->getNome() << std::endl;
    std::cout  << "Alunos: " << std::endl;
    d1.imprimirAlunos();
    
    return 0;
}