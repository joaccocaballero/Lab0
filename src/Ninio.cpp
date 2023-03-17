#include <iostream>
#include <string>
#include <set>
#include "../include/Ninio.h"
#include "../include/Objeto.h"

Ninio:: Ninio(std::string Nombre, int Edad, std::string Direccion, std::string Telefono){
    this->Nombre= Nombre;
    this->Edad= Edad;
    this->Direccion= Direccion;
    this->Telefono= Telefono;
}

void Ninio::addObjeto(Objeto objeto) {
    ObjetosPrestados.insert(objeto);
}

string Ninio::listarObjetosPrestados() {
    std::set<std::string> listaObjetos;
    for (Objeto*it= ObjetosPrestados.begin(); it != ObjetosPrestados.end() ; ++it) {
        Objeto* o = *it;
        listaObjetos.insert(o->toString());
    }
    return listaObjetos;
}