#include "../include/ObjetoRoto.h"

#include <string>

DTObjetoRoto::DTObjetoRoto(std::string NombreObjeto, bool Prestado, std::string NombreNinio){
    this->NombreObjeto= NombreObjeto;
    this->Prestado = Prestado;
    this->NombreNinio = NombreNinio;
}

std::string getNombre(){
    return this->Nombre
}

bool enPrestamo(){
    return this->Prestado
}

std::string getNinioPrestado(){
    return this->NombreNinio
}

DTObjetoRoto::~DTObjetoRoto(){}