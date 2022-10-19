#include "Pessoa.hpp"

bool Pessoa::validarCpf(unsigned long cpfTeste) {

    int soma1{0};
    int soma2{0};
    int dig_verificador2 = cpfTeste % 10;
    cpfTeste = cpfTeste / 10;
    int dig_verificador1 = cpfTeste % 10;

    for (int i{2}; i<=10; ++i) {
        cpfTeste = cpfTeste / 10;
        soma1 += (cpfTeste % 10) * i;
        soma2 += (cpfTeste % 10) * (i+1);
    }

    soma2 += dig_verificador1 * 2;

    if ((((soma1 * 10) % 11) != dig_verificador1) ||
        (((soma2 * 10) % 11) != dig_verificador2))
        return false;
    return true;

}