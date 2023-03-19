#include "../include/Ninio.h"

#include <iostream>
#include <set>
#include <string>
#include <vector>

#include "../include/Objeto.h"

Ninio:: Ninio(std::string Nombre, int Edad, std::string Direccion, std::string Telefono){
    this->Nombre= Nombre;
    this->Edad= Edad;
    this->Direccion= Direccion;
    this->Telefono= Telefono;
}

void Ninio::addObjeto(Objeto *objeto) {
    ObjetosPrestados.insert(objeto);
}

std::vector<std::string> Ninio::listarObjetosPrestados() {
    std::vector<std::string> listaObjetos;
    
    for (auto it = ObjetosPrestados.begin(); it != ObjetosPrestados.end() ; ++it) {
        Objeto *o = *it;
        listaObjetos.push_back(o->toString());
    }
    return listaObjetos;
}

void Ninio::borrarLink(Objeto *obj) {
    ObjetosPrestados.erase(obj);
}

std::string Ninio::getNombre() {
    return Nombre;
}

Ninio ::~Ninio(){
    ObjetosPrestados.clear();
}

