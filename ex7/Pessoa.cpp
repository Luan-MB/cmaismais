// Luan Machado Bernardt GRR20190363

#include "Pessoa.hpp"

#include <iostream>

Pessoa::Pessoa() {}

Pessoa::Pessoa(std::string nome, unsigned long cpf, unsigned short int idade)
	:nome{nome} {
	setCpf(cpf);
	setIdade(idade);
}

unsigned long Pessoa::getCpf(){
    //retorna uma cópia do cpf
    return this->cpf;
}

void Pessoa::setCpf(unsigned long cpf){
    if(validarCPF(cpf)) {
        this->cpf = cpf;
        return;
    }
	this->cpf = 0;//indica que não é um cpf válido 
    return;
}

std::string Pessoa::getNome(){
    return this->nome;
}

void Pessoa::setNome(std::string nome){
    this->nome = nome;
}

unsigned short Pessoa::getIdade(){
    return (unsigned short) idade;
}

void Pessoa::setIdade(unsigned short int idade){
	if(idade < 120)
    	this->idade = (unsigned char)idade;
	else
		this->idade = 0; //indicar erro
}

bool Pessoa::validarCPF(unsigned long cpfTeste){
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
