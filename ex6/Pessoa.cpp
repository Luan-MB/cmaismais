// Luan Machado Bernardt GRR20190363

#include "Pessoa.hpp"

#include <iostream>

Pessoa::Pessoa() {}

Pessoa::Pessoa(std::string nomePessoa)
	:nome{nomePessoa}{
}

Pessoa::Pessoa(std::string nomePessoa, 
	unsigned short int idadePessoa)
		:Pessoa(nomePessoa){
			setIdade(idadePessoa);
		}

Pessoa::Pessoa(std::string nomePessoa,
	unsigned long cpfPessoa,
	unsigned short int idadePessoa)
		:Pessoa{nomePessoa}{
	setCpf(cpfPessoa);
	setIdade(idadePessoa);
}

unsigned long Pessoa::getCpf(){
    //retorna uma cópia do cpf
    return cpf;
}

void Pessoa::setCpf(unsigned long novoCpf){
    if(validarCPF(novoCpf)){
        cpf = novoCpf;
        return;
    }
	cpf = 0;//indica que não é um cpf válido 
    return;
}

std::string Pessoa::getNome(){
    return nome;
}

void Pessoa::setNome(std::string novoNome){
    nome = novoNome;
}

unsigned short int Pessoa::getIdade(){
    return (unsigned short int)idade;
}

void Pessoa::setIdade(unsigned short int novaIdade){
	if(novaIdade < 120)
    	idade = (unsigned char)novaIdade;
	else
		idade = 0; //indicar erro
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
