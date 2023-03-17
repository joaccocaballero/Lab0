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
        int tope;
    public:
        Ninio(std::string, int, std::string, std::string);
        void addObjeto(Objeto);
        std::string *listarObjetosPrestados();
};
#include "Objeto.h"

#endif