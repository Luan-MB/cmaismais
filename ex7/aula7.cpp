#include <iostream>
#include <list>

#include "Pessoa.hpp"

int main() {
    std::list<Pessoa*> lista;

    Pessoa* p1{new Pessoa{"Sabrina Sato", 0, 6}};
    Pessoa* p2{new Pessoa{"Samambaia", 11111111111, 6}};
    Pessoa* p3{new Pessoa{"Dani Bananinha", 55555555555, 10}};
    
    std::list<int>::iterator it;
    lista.push_back(p1);
    lista.push_back(p2);
    lista.push_back(p3);

    for (Pessoa* p: lista) {
        std::cout << p->getNome() << std::endl;
    }
    return 0;
}