#pragma once
#ifndef _OBJETOH
#define _OBJETOH

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
        virtual Estado getEstado();
        std::string getPrestado();
        Ninio *getPrestadoA();
        void setPrestado(Ninio*);
        virtual void addNinio(Ninio*) = 0;
        virtual ~Objeto();
};



#endif