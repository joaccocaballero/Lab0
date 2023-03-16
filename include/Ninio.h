#include <iostream>
#include <string>
#include <vector>

#include "Objeto.h"
#ifndef NINIO
#define NINIO


class Ninio {
    private:
        std::string Nombre;
        int Edad;
        std::string Direccion;
        std::string Telefono;
        Objeto arregloObjetos[MAX_OBJETOS];
        int tope;
    public:
        Ninio(std::string, int, std::string, std::string);
        void addObjeto(Objeto);
        std::string *listarObjetosPrestados();
};

#endif