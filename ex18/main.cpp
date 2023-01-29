// Luan Machado Bernardt | GRR20190363

#include <iostream>
#include <iomanip>
#include "CPF.hpp"
#include "IndiceInvalidoException.hpp"
#include "CPFInvalidoException.hpp"
#include "Pessoa.hpp"

using namespace ufpr;

int main() {
    //abra um gerador de cpf e coloque
    //um cpf que começa com 0
    CPF cpf1;

    try {    
        std::cin >> cpf1;

        std::cout << cpf1 << std::endl;

        try {
            unsigned long trecho{cpf1(0, 8)};
            std::cout << "Oito primeiros digitos do CPF: " << std::setw(8) << std::setfill('0') << trecho << std::endl;
            std::cout << "Digito de estado do CPF: " << cpf1[8] << std::endl;
            std::cout << "Digitos verificadores do CPF: " << std::setw(2) << std::setfill('0') << cpf1(9, 2) << std::endl;
        } catch (IndiceInvalidoException &iie) {
            std::cout << "Erro de indice invalido: " << iie.what() << iie.idx << std::endl;
        }

    } catch (CPFInvalidoException &cpfe) {
        std::cout << "Erro de CPF: " << cpfe.what() << cpfe.cpf << std::endl;
    }

    Pessoa p1{"Mario", 11111111111};
    Pessoa p2{"Mario", 11111111111};

    if (p1 == p2) {
        std::cout << p1.getNome() << " com CPF " << p1.getCpf() <<  " e " << p2.getNome() << " com CPF " << p2.getCpf() << " sao a mesma pessoa" << std::endl;
    }
    
    p2.setCpf(22222222222);

    if (p1 != p2) {
        std::cout << p1.getNome() << " com CPF " << p1.getCpf() <<  " e " << p2.getNome() << " com CPF " << p2.getCpf() << " nao sao a mesma pessoa" << std::endl;
    }

    return 0;
}