#pragma once
#ifndef NINIO
#define NINIO

#include <iostream>
#include <set>
#include <string>

class Objeto;

class Ninio {
    private:
        std::string Nombre;
        int Edad;
        std::string Direccion;
        std::string Telefono;
        std::set<Objeto*> ObjetosPrestados;
    public:
        Ninio(std::string Nombre, int Edad, std::string Direccion, std::string Telefono);
        void addObjeto(Objeto*);
        std::set<std::string> *listarObjetosPrestados();
        ~Ninio();
};

#include "Objeto.h"

#endif