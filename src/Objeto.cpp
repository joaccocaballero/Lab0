#include "../include/Objeto.h"

#include <string>

Objeto::Objeto(string nombre, int anio){
    this->Nombre = nombre;
    this->Anio = anio;
}

Objeto::getNombre() {
    return this->Nombre;
}

Objeto::getAnio() {
    return this->Anio;
}

Objeto::getEstado() {
    return this->Estado;
}

Objeto::~Objeto() {
    delete niño;
}