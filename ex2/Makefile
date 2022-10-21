parametrosCompilacao= -Wall #-Wshadow                                            

nomePrograma= aula

all: $(nomePrograma)

$(nomePrograma): main.o Retangulo.o
	g++ -o $(nomePrograma) main.o Retangulo.o $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)
