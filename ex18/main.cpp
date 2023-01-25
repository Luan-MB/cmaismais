#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "CPF.hpp"

int main(){
    ufpr::CPF cpf1{11111111111};
    ufpr::CPF cpf2{22222222222};

    if (cpf1 == cpf2)
        std::cout << "Diferentes" << std::endl;
    else 
        std::cout << "Iguais" << std::endl;

    cpf1 = cpf2;

    if (cpf1 == cpf2)
        std::cout << "Diferentes" << std::endl;
    else 
        std::cout << "Iguais" << std::endl;
    
    return 0;
}