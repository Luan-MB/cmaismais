# Luan Machado Bernardt | GRR20190363

CC     = g++
CFLAGS = -Wall #-Wshadow

PROG = main
OBJS = Pessoa.o Disciplina.o SalaAula.o Console.o ConteudoMinistrado.o main.o

.PHONY: clean purge all

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o  $@ $^

clean:
	@rm -f *.o

purge:   
	@rm -f $(PROG)