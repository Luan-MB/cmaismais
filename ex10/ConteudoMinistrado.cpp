// Luan Machado Bernardt GRR20190363

#include <iostream>

#include "ConteudoMinistrado.hpp"

unsigned int ConteudoMinistrado::proxId{0};

ConteudoMinistrado::ConteudoMinistrado(std::string descricao, unsigned short cargaHorariaConteudo):
    descricao(descricao), cargaHorariaConteudo(cargaHorariaConteudo), id{ConteudoMinistrado::proxId}{
        ConteudoMinistrado::proxId++;
}

ConteudoMinistrado::~ConteudoMinistrado() {
	std::cerr << "--- Destruindo conteudo " << this->descricao << std::endl;
}

std::string& ConteudoMinistrado::getDescricao(){
	return descricao;
}

unsigned short ConteudoMinistrado::getCargaHorariaConteudo(){
	return cargaHorariaConteudo;
}

unsigned int ConteudoMinistrado::getId(){
	return id;
}