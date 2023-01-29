#include "IndiceInvalidoException.hpp"

using namespace ufpr;

IndiceInvalidoException::IndiceInvalidoException(const int idx)
    :std::out_of_range{"Indice fora do intervalo (0..10)."}, idx{idx} {
}