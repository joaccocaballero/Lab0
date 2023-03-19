CC=g++
CFLAGS=-I./include/*.h

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o main.o

src/JuegoMesa.o: src/JuegoMesa.cpp
	$(CC) $(CFLAGS) -c src/JuegoMesa.cpp -o src/JuegoMesa.o

src/Libro.o: src/Libro.cpp
	$(CC) $(CFLAGS) -c src/Libro.cpp -o src/Libro.o

src/Ninio.o: src/Ninio.cpp
	$(CC) $(CFLAGS) -c src/Ninio.cpp -o src/Ninio.o
	
src/Objeto.o: src/Objeto.cpp
	$(CC) $(CFLAGS) -c src/Objeto.cpp -o src/Objeto.o

src/ObjetoRoto.o: src/ObjetoRoto.cpp 
	$(CC) $(CFLAGS) -c src/ObjetoRoto.cpp -o src/ObjetoRoto.o


all: main.o src/JuegoMesa.cpp src/Libro.cpp src/Ninio.cpp src/Objeto.cpp src/ObjetoRoto.cpp
	$(CC) main.o src/JuegoMesa.cpp src/Libro.cpp src/Ninio.cpp src/Objeto.cpp src/ObjetoRoto.cpp -o programa

.PHONY: clean
clean:
	rm -f programa *.o src/*.o
