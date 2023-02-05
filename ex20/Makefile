# Luan Machado Bernardt | GRR20190363

CC     = g++
CFLAGS = -Wall -std=c++17 #-Wshadow

PROG = main
OBJS = main.o \
	Pessoa.o \
	Professor.o \
	Engenheiro.o \
	ProfessorEngenheiro.o \
	ProfessorAdjunto.o \
	SalaAula.o \
	Disciplina.o \
	ConteudoMinistrado.o \
	Console.o \
	CPFInvalidoException.o \
	CPF.o \
	Livro.o \
	Ementa.o

.PHONY: clean purge all

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o  $@ $^

clean:
	@rm -f *.o

purge:   
	@rm -f $(PROG)