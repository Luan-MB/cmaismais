// Luan Machado Bernardt GRR20190363

#include<iostream>
#include <iomanip>
#include<string>
#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "Curso.hpp"

int main(){
	
	Curso c1{"BCC", 2011, 4800};

	Pessoa *p1{new Pessoa{"Professor", 11111111111, 45}};
	
	Disciplina d1{"Orientacao a Objetos", c1, p1};

	Pessoa *a1{new Pessoa{"Aluno1", 8286853989, 21}};
	Pessoa *a2{new Pessoa{"Aluno2", 0, 22}};
	Pessoa *a3{new Pessoa{"Aluno3", 72131217900, 25}};

	d1.adicionarAluno(a1);
	d1.adicionarAluno(a2);
	d1.adicionarAluno(a3);

	std::cout << p1->getNome() << '\t' << p1->getIdade() << '\t' << p1->getCpf() << std::endl;
	std::cout << d1.getNome() << " (" << d1.getCurso().getNome() << ")" << std::endl;
	std::cout << "Alunos:" << std::endl;

	Pessoa **alunosDisciplina = d1.getVetorAlunos();

	for (int i{0}; i<d1.getNumAlunos(); ++i) {
		std::cout << '\t' << alunosDisciplina[i]->getNome() << 
			'\t' << std::setfill('0') << std::setw(11) << 
			alunosDisciplina[i]->getCpf() << std::endl; 
	}

	delete a1;
	delete a2;
	delete a3;

	return 0;
}