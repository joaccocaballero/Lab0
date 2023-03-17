

#ifndef JUEGOMESA
#define JUEGOMESA
#include <string>

#include "Objeto.h"

class JuegoMesa : public Objeto {
    private: 
        int EdadRecomendada;
        int CantJugadores;
    public:
        JuegoMesa(std::string Nombre,int anio, Estado estado,int EdadRecomendado, int CantJugadores);
        std::string getNombre();
        int getAnio();
        Estado getEstado();

        virtual std::string toString();
};

#endif