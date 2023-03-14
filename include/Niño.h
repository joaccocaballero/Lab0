#include <iostream>
#include <string>
#include <vector>
#ifndef Niño
#define Niño

#include "Objeto.h"

class Niño {
    private:
        std::string Nombre;
        int Edad;
        std::string Direccion;
        std::string Telefono;
        Objeto *objs[MAX_OBJETOS];
        int tope;
    public:
        Niño(string, int, string, string);
        void addObjeto(Objeto);
        std::string *listarObjetosPrestados();
};

#endif