#ifndef ALUNO_INEXISTENTE_EXCEPTION
#define ALUNO_INEXISTENTE_EXCEPTION

#include <stdexcept>

class AlunoInexistenteException : public std::runtime_error {
    public:
        const unsigned long cpf;

        AlunoInexistenteException(const unsigned long cpf);
        virtual ~AlunoInexistenteException() = default;
};
#endif