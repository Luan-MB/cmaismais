parametrosCompilacao= -Wall #-Wshadow                                            

nomePrograma= main

all: $(nomePrograma)

$(nomePrograma): main.o Retangulo.o
	g++ -o $(nomePrograma) main.o Retangulo.o $(parametrosCompilacao)

clean:
	rm -f *.o *.gch

purge:
	rm -f $(nomePrograma)
