#include "CargaHorariaException.hpp"

using namespace ufpr;

CargaHorariaException::CargaHorariaException(const unsigned short int cargaHoraria)
    :std::runtime_error{"Carga horaria invalida."}, cargaHoraria{cargaHoraria}{
}