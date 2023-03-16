
#include <string>
#ifndef JUEGOMESA
#define JUEGOMESA

#include "Objeto.h"

class JuegoMesa : public Objeto {
    private: 
        int EdadRecomendada;
        int CantJugadores;
    public:
        std::string getNombre();
        int getAnio();
        Estado getEstado();
        JuegoMesa(int, int, std::string, int);
        virtual std::string toString();
};

#endif