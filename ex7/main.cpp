// Luan Machado Bernardt

#include <iostream>
#include <iomanip>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "Curso.hpp"

int main() {

    Curso c1{"BCC", 2011, 4800};

	Pessoa *p0{new Pessoa{"Professor", 11111111111, 45}};
	
	Disciplina d1{"Orientacao a Objetos", c1, p0};

    std::list<Pessoa*> lista;

    Pessoa* p1{new Pessoa{"Aluno1", 0, 6}};
    Pessoa* p2{new Pessoa{"Aluno2", 11111111111, 6}};
    Pessoa* p3{new Pessoa{"Aluno3", 55555555555, 10}};
    Pessoa* p4{new Pessoa{"Aluno4", 8286853989, 10}};
    
    d1.adicionarAluno(p1);
    d1.adicionarAluno(p2);
    d1.adicionarAluno(p3);
    d1.adicionarAluno(p4);

    std::cout << "--- Lista apos insercoes ---" << std::endl;
    
    for (Pessoa* p: d1.getAlunos()) {
        std::cout << p->getNome() << '\t' << std::setfill('0') << std::setw(11) << p->getCpf() << std::endl;
    }


    d1.removeAluno(p3);
    d1.removeAluno(8286853989);

    std::cout << "--- Lista apos remocoes ---" << std::endl;

    for (Pessoa* p: d1.getAlunos()) {
        std::cout << p->getNome() << '\t' << std::setfill('0') << std::setw(11) << p->getCpf() << std::endl;
    }

    delete p0;
    delete p1;
    delete p2;

    return 0;
}