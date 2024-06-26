#include "../include/ObjetoRoto.h"

#include <string>

DTObjetoRoto::DTObjetoRoto(std::string NombreObjeto, bool Prestado, std::string NombreNinio){
    this->NombreObjeto= NombreObjeto;
    this->Prestado = Prestado;
    this->NombreNinio = NombreNinio;
}

std::string DTObjetoRoto::getNombre(){
     return this->NombreObjeto; 
}

bool DTObjetoRoto::enPrestamo(){ 
    return this->Prestado; 
}

std::string DTObjetoRoto::getNinioPrestado(){ 
    return this->NombreNinio; 
}

std::string DTObjetoRoto::getString(){
    std::string prestado = enPrestamo() ? "SI, " + getNinioPrestado() : "NO";
    return getNombre() + ", Prestado " + prestado;
}

DTObjetoRoto::~DTObjetoRoto(){
    
}