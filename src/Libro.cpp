#include <iostream>
#include <string>
#include "../include/Libro.h"
//falta agregar objeto.h ?

Libro::Libro(string Autor , int CantPaginas, string nombre, int anio): Objeto(nombre, anio) {
    this->Autor = Autor;
    this->CantPaginas = CantPaginas;
}

Libro::toString() {
    return 'Libro: ' + getNombre() + ', Año Comprado: ' + getAnio()
         + ', Estado: ' + getEstado() + ', Autor: ' + this->Autor + ', CantPaginas' + this->CantPaginas; 
}