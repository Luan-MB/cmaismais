#include "Pessoa.hpp"

#include <iostream>
#include<stdexcept>

#include "CPFInvalidoException.hpp"

Pessoa::Pessoa(){}

Pessoa::Pessoa(const std::string& nome)
	:nome{nome}{
}

Pessoa::Pessoa(const std::string& nome,
			const unsigned long cpf)
		:Pessoa{nome}{
	this->setCpf(cpf);
}

Pessoa::Pessoa(const std::string& nome,
			const unsigned long cpf,
			const unsigned short int idade)
		:Pessoa{nome, cpf}{
	this->setIdade(idade);
}

unsigned long Pessoa::getCpf() const{
    //retorna uma cópia do cpf
    return this->cpf;
}

void Pessoa::setCpf(unsigned long cpf){
    if(!validarCPF(cpf))
        throw CPFInvalidoException{cpf};
    this->cpf = cpf;
}

std::string Pessoa::getNome() const{
    return this->nome;
}

void Pessoa::setNome(const std::string& nome){
    this->nome = nome;
}

unsigned short int Pessoa::getIdade() const{
    return (unsigned short int)idade;
}

void Pessoa::setIdade(const unsigned short int novaIdade){
	if(novaIdade > 120)
		throw std::invalid_argument{"Idade Invalida."};
	idade = (unsigned char)novaIdade;
}

void Pessoa::imprimirEnderecoMemoria() const{
    std::cout << this << std::endl;
}

bool Pessoa::validarCPF(unsigned long cpfTeste) const{
	int somatorioValidaUltimo;
	int modulo;
	int somatorioValidaPenultimo = 0;
	int ultimo = cpfTeste%10;
	cpfTeste = cpfTeste/10;
	int penultimo = cpfTeste%10;
	cpfTeste = cpfTeste/10;
	
	somatorioValidaUltimo = penultimo*2;
	for(int i=2; i <= 11; i++){
		modulo = cpfTeste%10;
		cpfTeste = cpfTeste/10;
		somatorioValidaPenultimo += modulo*i;
		somatorioValidaUltimo += modulo*(i+1);
	}
	modulo = somatorioValidaPenultimo%11;
	if(modulo < 2){
		if(!penultimo)
			return false;//cpf invalido
	}else{
		if(penultimo != 11 - modulo)
			return false;//cpf invalido
	}
	modulo = somatorioValidaUltimo%11;
	if(modulo < 2){
		if(!ultimo)
			return false;//cpf invalido
	}else{
		if(ultimo != 11-modulo)
			return false;//cpf invalido
	}
	return true;//cpf valido
}