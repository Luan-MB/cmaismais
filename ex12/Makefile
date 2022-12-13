# Luan Machado Bernardt | GRR20190363

CC     = g++
CFLAGS = -Wall #-Wshadow

PROG = main
OBJS = main.o

.PHONY: clean purge all

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o  $@ $^ Fila.hpp

clean:
	@rm -f *.o

purge:   
	@rm -f $(PROG)