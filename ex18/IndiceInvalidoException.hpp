#ifndef INDICE_INVALIDO_EXCEPTION
#define INDICE_INVALIDO_EXCEPTION

#include <stdexcept>

namespace ufpr{
class IndiceInvalidoException : public std::out_of_range {
    public:
        const int idx;

        IndiceInvalidoException(const int idx);
        virtual ~IndiceInvalidoException() = default;
};
}
#endif