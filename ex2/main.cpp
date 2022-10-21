#include <iostream>
#include <iomanip>

#include "Pessoa.hpp"

#define NUM_PESSOAS 3

int main() {
    
    Pessoa pessoas[NUM_PESSOAS];
    
    for (int i{0}; i<NUM_PESSOAS; ++i) {
        std::cout << "Nome: ";
        std::cin >> pessoas[i].nome;
        
        int idade;

        std::cout << "Idade: ";
        std::cin >> idade;

        pessoas[i].idade = idade;
        
        bool valido = false;
        while (!valido) {
            std::cout << "CPF: ";
            std::cin >> pessoas[i].cpf;
            valido = pessoas[i].validarCPF(pessoas[i].cpf);
        }
    }  

    for (int i{0}; i<NUM_PESSOAS; i+=1) {
        std::cout << "Dados da pessoa: " << pessoas[i].nome << "\t"
                << (unsigned short int)pessoas[i].idade << "\t" << std::setfill('0') << std::setw(11) <<  pessoas[i].cpf << std::endl;
    }
    return 0;
}