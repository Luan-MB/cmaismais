#include <iostream>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "Curso.hpp"

int main() {

    Curso c1{"BCC", 2011, 4800};

	Pessoa *p0{new Pessoa{"Leandro Karnal", 11111111111, 45}};
	
	Disciplina d1{"Orientacao a Objetos", c1, p0};

    std::list<Pessoa*> lista;

    Pessoa* p1{new Pessoa{"Michael Jackson", 0, 6}};
    Pessoa* p2{new Pessoa{"Amy Winehouse", 11111111111, 6}};
    Pessoa* p3{new Pessoa{"Kurt Cobain", 55555555555, 10}};
    Pessoa* p4{new Pessoa{"Freddie Mercury", 8286853989, 10}};
    
    d1.adicionarAluno(p1);
    d1.adicionarAluno(p2);
    d1.adicionarAluno(p3);
    d1.adicionarAluno(p4);

    for (Pessoa* p: d1.getAlunos()) {
        std::cout << p->getNome() << std::endl;
    }

    d1.removeAluno(p3);

    for (Pessoa* p: d1.getAlunos()) {
        std::cout << p->getNome() << std::endl;
    }

    return 0;
}