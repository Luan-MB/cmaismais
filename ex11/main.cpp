// Luan Machado Bernardt GRR20190363

#include <iostream>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "ConteudoMinistrado.hpp"
#include "SalaAula.hpp"
#include "Curso.hpp"

int main() {
    Disciplina dis1{"C++", nullptr};
    Disciplina* dis2{new Disciplina{"Java", nullptr}};
    
    SalaAula sala{"Lab Info 1", 40};

    dis1.adicionarConteudoMinistrado("Ponteiros", 4);
    dis1.adicionarConteudoMinistrado("Destrutores", 2);

    dis2->adicionarConteudoMinistrado("Heranca", 4);
    dis2->adicionarConteudoMinistrado("Construtores", 2);

    dis1.setSalaAula(&sala);
    dis2->setSalaAula(&sala);

    std::list<Disciplina*> disSala = sala.getDisciplinas();
    std::list<Disciplina*>::iterator it;
    for(it = disSala.begin(); it != disSala.end(); it++)
        std::cerr << (*it)->getNome() << std::endl;

    delete dis2;
    std::cout << "Fim do Programa" << std::endl;

    return 0;
}