#include <iostream>
#include <string>
#include "../include/Niño.h"

Niño:: Niño(string Nombre, int Edad, string Direccion, string Telefono){
    this->Nombre= Nombre;
    this-> Edad= Edad;
    this->Direccion= Direccion;
    this->Telefono= Telefono;
    this->tope = 0;
}

void Niño::addObjeto(Objeto objeto) {
    objs[tope+1] = objeto;
    tope++;
}

string Niño::listarObjetosPrestados() {
    std::string *res = std::string [this->tope];
    for ( i = 0; i < this->tope; i++) {
        res[i] = this->objs[i].toString();
    }
    return res;
}