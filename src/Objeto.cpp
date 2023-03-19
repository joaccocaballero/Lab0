#include "../include/Objeto.h"

#include <string>

Objeto::Objeto(std::string Nombre, int anio, Estado estado){
    this->Nombre = nombre;
    this->anio = anio;
    this->estado = estado;
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

Objeto::addNinio(Ninio *ninio) {
    this->PrestadoA = ninio;
}

Objeto::getPrestado(){
    return this->PrestadoA
}

Objeto::~Objeto() {
    delete PrestadoA;
}