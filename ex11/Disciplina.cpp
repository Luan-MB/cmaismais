// Luan Machado Bernardt GRR20190363

#include <iostream>

#include "Disciplina.hpp"
#include "SalaAula.hpp"

Disciplina::Disciplina(std::string nome)
	:nome{nome}, sala{nullptr} {
}

Disciplina::Disciplina(std::string nome, SalaAula* sala)
    :nome{nome}, sala{sala} {
}

Disciplina::~Disciplina() {
        std::cerr << "Destruindo disciplina " << this->nome << std::endl;
        this->setSalaAula(nullptr);
        this->limparConteudos();
}
std::string Disciplina::getNome() const {  
	return nome;
}

void Disciplina::setNome(const std::string& nome) {
	this->nome = nome;
}

int Disciplina::getCargaHoraria() const {
	return this->cargaHoraria;
}

void Disciplina::setCargaHoraria(const unsigned int carga) {
	this->cargaHoraria = carga;
}

const Pessoa* Disciplina::getProfessor() const {
    return this->professor;
}

void Disciplina::setProfessor(const Pessoa* prof) {
    this->professor = prof;
    // prof->setNome("Nome2");
    // A linha acima nao compila, pois prof e um atributo const(apenas de leitura)
}

const SalaAula* Disciplina::getSalaAula() const {
    return this->sala;
}

void Disciplina::setSalaAula(SalaAula* sala) {
    if (this->sala != nullptr)
        this->sala->disciplinasMinistradas.remove(this);
    this->sala = sala;
    if (this->sala != nullptr)
        sala->disciplinasMinistradas.push_back(this);  
}

bool Disciplina::adicionarAluno(Pessoa* aluno) {
	if (this->alunos.size() < 50) {
		this->alunos.push_back(aluno);
		return true;
	}
	return false;
}

void Disciplina::removeAluno(Pessoa* aluno) {
	this->alunos.remove(aluno);
	delete aluno;
}

void Disciplina::removeAluno(const unsigned long cpf) {
	std::list<Pessoa*>::iterator it;

	for (it = this->alunos.begin(); it != this->alunos.end(); ++it) {
		if ((*it)->getCpf() == cpf) {
			this->alunos.erase(it);
			delete *it;
			break;
		}
	}
}

const std::list<Pessoa*> Disciplina::getAlunos() const {
	return this->alunos;
}

void Disciplina::imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso) const {
    double pctCurso = (double)this->cargaHoraria/cargaTotalCurso;
    pctCurso = pctCurso * 100;
    std::cout << cabecalho << std::endl;
    std::cout << "Disciplina: " << this->nome << std::endl;
    std::cout << "Carga: " << this->cargaHoraria << std::endl;
    std::cout << "Porcentagem do curso: " << pctCurso << "%" << std::endl;
    std::cout << "Professor: " << this->professor->getNome() << std::endl;
}

void Disciplina::adicionarConteudoMinistrado(std::string conteudo, unsigned short cargaHorariaConteudo) {
    this->conteudos.push_back(new ConteudoMinistrado{conteudo, cargaHorariaConteudo});
}

void Disciplina::removerConteudoMinistrado(unsigned long id) {
    std::list<ConteudoMinistrado*>::iterator it;
    for (it = this->conteudos.begin(); it != this->conteudos.end(); ++it) {
        if ((*it)->getId() == id) {
            this->conteudos.erase(it);
            delete *it;
            break;
        }
    }
}

void Disciplina::imprimirConteudosMinistrados() {
    std::list<ConteudoMinistrado*>::iterator it;
    for (it = conteudos.begin(); it!=conteudos.end(); ++it) {
        std::cout << "Id: " << (*it)->getId() << std::endl
            << "Conteudo: " << (*it)->getDescricao() << std::endl
            << "Carga: " << (*it)->getCargaHorariaConteudo() << std::endl << std::endl;
    }
}

const std::list<ConteudoMinistrado*>& Disciplina::getConteudos() const {
    return this->conteudos;
}

void Disciplina::limparConteudos() {
    std::list<ConteudoMinistrado*>::iterator it{this->conteudos.begin()};
    while (it != this->conteudos.end()) {
        delete *it;
        it = this->conteudos.erase(it);
    }
}