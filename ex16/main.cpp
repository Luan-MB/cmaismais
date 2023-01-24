#include <iostream>
#include <stdexcept>

#include "CPFInvalidoException.hpp"
#include "AlunoInexistenteException.hpp"
#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main() {
  std::string nome;
  unsigned long cpf;
  unsigned short int idade;

  Disciplina d{"C++"};

  for (int i=0; i<3; i++) {

    std::cout << "----------------" << std::endl;
    std::cout << "Digite o nome: ";
    std::cin >> nome;
    std::cout << "Digite o cpf: ";
    std::cin >> cpf;
    std::cout << "Digite a idade: ";
    std::cin >> idade;

    try {
      Pessoa p{nome, cpf, idade};
      std::cout << p.getNome() << " " << p.getCpf() << " " << p.getIdade()
                << std::endl;
      d.adicionarAluno(&p);
    } catch (std::invalid_argument &iv) {
      std::cout << "Argumento invalido: " << iv.what() << std::endl;
    } catch (CPFInvalidoException &cpfe) {
      std::cout << "Erro de CPF: " << cpfe.what() << cpfe.cpf << std::endl;
    } catch (std::exception &ex) {
      std::cout << "Erro Generico: " << ex.what() << std::endl;
    }
  }

  std::cout << "----------------" << std::endl;
  std::cout << "Digite o cpf do aluno a ser removido: ";
  std::cin >> cpf;

  try {
    d.removerAluno(cpf);
    std::cout << "Aluno removido." << cpf << std::endl;
  } catch (std::invalid_argument &iv) {
    std::cout << "Argumento invalido: " << iv.what() << std::endl;
  } catch (AlunoInexistenteException &aie) {
    std::cout << "Erro de CPF: " << aie.what() << aie.cpf << std::endl;
  } catch (std::exception &ex) {
    std::cout << "Erro Generico: " << ex.what() << std::endl;
  }

  return 0;
}
