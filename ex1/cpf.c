#include <stdio.h>

#define STRINGSIZE 100

typedef struct {
    char nome[STRINGSIZE];
    unsigned long cpf;
    unsigned short idade;
} pessoa;

static unsigned long potencia (int b, int e) {
    
    unsigned long resultado = 1;

    for (int i=0; i<e; ++i) {
        resultado *= b;
    }

    return resultado;
}

static int validarCPF(unsigned long cpfTeste) {

    int soma1, soma2;
    int dig_verificador2 = cpfTeste % 10;
    cpfTeste = cpfTeste / 10;
    int dig_verificador1 = cpfTeste % 10;

    soma1 = soma2 = 0;

    for (int i=2; i<=10; ++i) {
        cpfTeste = cpfTeste / 10;
        soma1 += (cpfTeste % 10) * i;
        soma2 += (cpfTeste % 10) * (i+1);
    }

    soma2 += dig_verificador1 * 2;

    if ((((soma1 * 10) % 11) != dig_verificador1) ||
        (((soma2 * 10) % 11) != dig_verificador2))
        return 0;
    return 1;

}

int main () {

    pessoa p;

    scanf("%s", p.nome);
    scanf("%lu", &p.cpf);
    scanf("%hu", &p.idade);

    if (validarCPF(p.cpf))
        printf("%011lu e um cpf valido\n", p.cpf);
    return 0;
}