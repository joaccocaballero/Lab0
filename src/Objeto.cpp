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


std::string Objeto::getPrestado(){
    if(this->PrestadoA != NULL){
        return PrestadoA->getNombre();
    }
    else{
        return " ";
    }
}

Objeto::~Objeto() {
    if (PrestadoA != NULL) {
        std::cout << "adentro" << std::endl;
        PrestadoA->borrarLink(this);
        delete PrestadoA;
    }
}