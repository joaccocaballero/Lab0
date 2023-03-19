#include <iostream>
#include <string>
#include "../include/Libro.h"
#include "../include/Objeto.h"

Libro::Libro(std::string nombre , int anio, Estado estado, std::string autor, int CantPaginas): Objeto(nombre, anio, estado) {
    this->Autor = autor;
    this->CantPaginas = CantPaginas;
}

Libro::toString() {
    return 'Libro: ' + getNombre() + ', Año Comprado: ' + getAnio()
         + ', Estado: ' + getEstado() + ', Autor: ' + this->Autor + ', CantPaginas' + this->CantPaginas; 
}

Libro::~Libro(){
    ~Objeto();
}