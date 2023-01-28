#include <iostream>
#include "CPF.hpp"
using namespace ufpr;

int main(){
    //abra um gerador de cpf e coloque
    //um cpf que começa com 0
    CPF cpf1{8286853989};
    
    try {
        std::cout << cpf1[11] << std::endl;
    } catch (std::out_of_range &oor) {
        std::cout << "Erro de Indice: " << oor.what() << std::endl;
    }

    return 0;
}