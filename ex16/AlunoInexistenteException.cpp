#include "AlunoInexistenteException.hpp"

AlunoInexistenteException::AlunoInexistenteException(const unsigned long cpf)
    :std::runtime_error{"Aluno com CPF Inexistente."}, cpf{cpf}{
}