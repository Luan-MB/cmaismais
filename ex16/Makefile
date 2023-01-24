# Luan Machado Bernardt | GRR20190363

CC     = g++
CFLAGS = -Wall #-Wshadow

PROG = main
OBJS = main.o \
	Pessoa.o \
	Professor.o \
	Engenheiro.o \
	ProfessorEngenheiro.o \
	ProfessorAdjunto.o \
	SalaAula.o Disciplina.o \
	ConteudoMinistrado.o \
	Console.o \
	CPFInvalidoException.o

.PHONY: clean purge all

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o  $@ $^

clean:
	@rm -f *.o

purge:   
	@rm -f $(PROG)