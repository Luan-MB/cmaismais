#include "CPF.hpp"

#include <iomanip>

#include "CPFInvalidoException.hpp"
#include "IndiceInvalidoException.hpp"

namespace ufpr {

CPF::CPF(const unsigned long numero) { this->setNumero(numero); }

unsigned long CPF::getNumero() const { return this->numero; }

void CPF::setNumero(const unsigned long numero) {
    if (!validarCPF(numero)) throw CPFInvalidoException{numero};
    this->numero = numero;
}

bool CPF::validarCPF(unsigned long cpfTeste) const {
    int somatorioValidaUltimo;
    int modulo;
    int somatorioValidaPenultimo = 0;
    int ultimo = cpfTeste % 10;
    cpfTeste = cpfTeste / 10;
    int penultimo = cpfTeste % 10;
    cpfTeste = cpfTeste / 10;

    somatorioValidaUltimo = penultimo * 2;
    for (int i = 2; i <= 11; i++) {
        modulo = cpfTeste % 10;
        cpfTeste = cpfTeste / 10;
        somatorioValidaPenultimo += modulo * i;
        somatorioValidaUltimo += modulo * (i + 1);
    }
    modulo = somatorioValidaPenultimo % 11;
    if (modulo < 2) {
        if (!penultimo) return false;  // cpf invalido
    } else {
        if (penultimo != 11 - modulo) return false;  // cpf invalido
    }
    modulo = somatorioValidaUltimo % 11;
    if (modulo < 2) {
        if (!ultimo) return false;  // cpf invalido
    } else {
        if (ultimo != 11 - modulo) return false;  // cpf invalido
    }
    return true;  // cpf valido
}

bool CPF::operator==(const CPF& outro) const {
    return this->numero == outro.numero;
}

bool CPF::operator!=(const CPF& outro) const { return !(*this == outro); }

bool CPF::operator<(const CPF& outro) const {
    return this->numero < outro.numero;
}

bool CPF::operator>(const CPF& outro) const { return (outro < *this); }

bool CPF::operator<=(const CPF& outro) const { return !(*this > outro); }

bool CPF::operator>=(const CPF& outro) const { return !(*this < outro); }

const CPF& CPF::operator=(const CPF& outro) {
    if (&outro != this) {  // cuidado com auto atribuição
        this->numero = outro.numero;
    }
    return *this;  // para permitir x = y = z
}

const CPF& CPF::operator=(const unsigned long numero) {
    if (!validarCPF(numero)) throw CPFInvalidoException{numero};
    this->numero = numero;
    return *this;
}

std::ostream& operator<<(std::ostream& stream, const ufpr::CPF& cpf) {
    unsigned int verificador{(unsigned int)(cpf.numero % 100)};
    unsigned long prim{cpf.numero / 100};
    unsigned int ter{(unsigned int)(prim % 1000)};
    prim /= 1000;
    unsigned int seg{(unsigned int)(prim % 1000)};
    prim /= 1000;

	stream << std::setw(3) << std::setfill('0');
    stream << prim << '.' << seg << '.' << ter << '-' << verificador;
    return stream;  // permitir cout << a << b << c;
}

unsigned short CPF::operator[](const int idx) const {

    if (idx > 10) throw IndiceInvalidoException(idx);
    
    unsigned long int cpf = this->numero;

    for (int i=idx; i<10; ++i) {
        cpf /= 10;
    }

    return cpf % 10;
}

unsigned long CPF::operator()(const int idx, const int tam) const {

    unsigned long int cpf{this->numero};
    unsigned long int potencia{10};

    for (int i=idx; i<10; ++i)
        potencia *= 10;

    unsigned long int trecho{cpf % potencia};
    
    for (int i=0; i<tam; ++i)
        potencia /= 10;

    return trecho / potencia;
}

}  // namespace ufpr