#include <iostream>
#include <string>
#include "../include/Libro.h"
#include "../include/Objeto.h"

Libro::Libro(std::string nombre , int anio, Estado estado, std::string autor, int CantPaginas): Objeto(nombre, anio, estado) {
    this->Autor = autor;
    this->CantPaginas = CantPaginas;
}

std::string Libro::toString() {
    return "Libro: " + getNombre() +
           ", Año Comprado: " + std::to_string(getAnio()) +
           ", Estado: " + std::to_string(getEstado()) +
           ", Autor: " + this->Autor + ", CantPaginas" +
           std::to_string(this->CantPaginas);
}

void Libro::addNinio(Ninio *ninio){ 
     setPrestado(ninio);
}

Libro::~Libro() {

}