#pragma once
#ifndef _NINIOH
#define _NINIOH

#include <iostream>
#include <set>
#include <vector>
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
        std::string getNombre();
        std::vector<std::string> listarObjetosPrestados();
        ~Ninio();
};

#include "Objeto.h"

#endif