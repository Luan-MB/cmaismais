#include <iostream>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "ConteudoMinistrado.hpp"
#include "Console.hpp"

int main(){
    Pessoa prof1{"João", 11111111111, 40};
    Disciplina dis1{"C++", nullptr};
    dis1.setProfessor(&prof1);

    dis1.adicionarConteudoMinistrado("Ponteiros", 4);
    dis1.adicionarConteudoMinistrado("Referencias", 2);
    dis1.adicionarConteudoMinistrado("Alocacao Dinamica", 6);

    std::cout << "--- Apos adicionar disciplinas ---" << std::endl;
    Console::imprimirDadosDisciplina(dis1);

    dis1.removerConteudoMinistrado(1);

    std::cout << "--- Apos remover a disciplina com id 1 ---" << std::endl;
    Console::imprimirDadosDisciplina(dis1);

	dis1.limparConteudos();
    std::cout << "--- Apos remover todas as disciplinas ---" << std::endl;
    Console::imprimirDadosDisciplina(dis1);

    return 0;
}