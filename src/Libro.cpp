#include <iostream>
#include <string>
#include "../include/Libro.h"
#include "../include/Objeto.h"

Libro::Libro(string Autor , int CantPaginas, string nombre, int anio, Estado estado): Objeto(nombre, anio, estado) {
    this->Autor = Autor;
    this->CantPaginas = CantPaginas;
}

Libro::toString() {
    return 'Libro: ' + getNombre() + ', Año Comprado: ' + getAnio()
         + ', Estado: ' + getEstado() + ', Autor: ' + this->Autor + ', CantPaginas' + this->CantPaginas; 
}