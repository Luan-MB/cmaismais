#include "IndiceInvalidoException.hpp"

using namespace ufpr;

IndiceInvalidoException::IndiceInvalidoException(const int idx)
    :std::out_of_range{"Indice Invalido."}, idx{idx} {
}