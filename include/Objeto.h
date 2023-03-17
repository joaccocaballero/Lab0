#pragma once
#ifndef Objeto
#define Objeto

#include <string>

#include "Ninio.h"

enum Estado { Nuevo, Bien_Conservado, Roto };

class Objeto {
    private:
        std::string Nombre;
        int anio;
        Estado estado;
        Ninio *PrestadoA;
    public:
        Objeto(std::string Nombre, int anio, Estado estado);
        virtual std::string toString() = 0;
        std::string getNombre();
        int getAnio();
        Estado getEstado();
        ~Objeto();
};

#endif