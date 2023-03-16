#include <iostream>
#include <string>
#include "../include/Ninio.h"
#include "../include/Objeto.h"

Ninio:: Ninio(std::string Nombre, int Edad, std::string Direccion, std::string Telefono){
    this->Nombre= Nombre;
    this->Edad= Edad;
    this->Direccion= Direccion;
    this->Telefono= Telefono;
    this->tope = 0;
}

void Ninio::addObjeto(Objeto objeto) {
    arregloObjetos[tope+1] = objeto;
    tope++;
}

string Ninio::listarObjetosPrestados() {
    std::string *res = std::string[this->tope];
    for ( int i = 0; i < this->tope; i++) {
        res[i] = this->arregloObjetos[i].toString();
    }
    return res;
}