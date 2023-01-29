#include <iostream>
#include <iomanip>
#include "CPF.hpp"
#include "IndiceInvalidoException.hpp"

using namespace ufpr;

int main() {
    //abra um gerador de cpf e coloque
    //um cpf que começa com 0
    CPF cpf1{8286853989};
    
    std::cout << std::setfill('0') << std::setw(5) << cpf1(1,5) << std::endl;

    return 0;
}