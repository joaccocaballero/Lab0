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
        std::vector<Objeto> ObjetosPrestados;
   
    public:
        std::string listarObjetosPrestados();
};

#endif