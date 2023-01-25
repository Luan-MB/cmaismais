#ifndef CARGA_HORARIA_EXCEPTION_HPP
#define CARGA_HORARIA_EXCEPTION_HPP

#include <stdexcept>

namespace ufpr{
class CargaHorariaException : public std::runtime_error{
    public:
        const unsigned short int cargaHoraria;

        CargaHorariaException(const unsigned short int cargaHoraria);
        virtual ~CargaHorariaException() = default;
};
}
#endif