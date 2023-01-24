# Luan Machado Bernardt | GRR20190363

CC     = g++
CFLAGS = -Wall #-Wshadow

PROG1 = main
OBJS1 = Pessoa.o Disciplina.o SalaAula.o Console.o ConteudoMinistrado.o main.o

PROG2 = retangulos
OBJS2 = retangulos.o Retangulo.o

.PHONY: clean purge all

all: $(PROG1) $(PROG2)

$(PROG1): $(OBJS1)
	$(CC) $(CFLAGS) -o  $@ $^

$(PROG2): $(OBJS2)
	$(CC) $(CFLAGS) -o  $@ $^

clean:
	@rm -f *.o

purge:   
	@rm -f $(PROG1) 
	@rm -f $(PROG2) 