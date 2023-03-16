.PHONY: all clean

Clases_CPP = /src
Clases_H= /include

CLASES_NOMBRES= Objeto Libro JuegoMesa Ninio
CLASES_0 = $(CLASES_NOMBRES:%=$(Clases_CPP)/%.o)

CC = g++

CCFLAGS = -Wall -I$(Clases_H) -g

main.o: main.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

$(Clases_CPP)/%.o: $(Clases_CPP)/%.cpp $(Clases_H)/%.h
	$(CC) $(CCFLAGS) -c $< -o $@

main: main.o $(CLASES_0)