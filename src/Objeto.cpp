#include "../include/Objeto.h"

#include <string>

Objeto::Objeto(std::string Nombre, int anio, Estado estado){
    this->Nombre = Nombre;
    this->anio = anio;
    this->estado = estado;
}

std::string Objeto::getNombre() {
    return this->Nombre;
}

int Objeto::getAnio() {
    return this->anio;
}

Estado Objeto::getEstado() {
    return this->estado;
}

void Objeto::setPrestado(Ninio *ninio) {
    this->PrestadoA = ninio;
}

Ninio *Objeto::getPrestadoA(){
    return this->PrestadoA;
}

std::string Objeto::getPrestado(){
    if(this->PrestadoA != NULL){
        return PrestadoA->getNombre();
    }
    else{
        return " ";
    }
}

Objeto::~Objeto() {
    
}