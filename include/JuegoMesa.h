
#include <string>
#ifndef JUEGOMESA
#define JUEGOMESA

#include "Objeto.h"

class JuegoMesa: public Objeto {
    private: 
        int EdadRecomendada;
        int CantJugadores;

    public:
        std::string getNombre();
        int getAnio();
        JuegoMesa(int, int);
        std::string toString();
};

#endif