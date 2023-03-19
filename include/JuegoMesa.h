

#ifndef JUEGOMESA
#define JUEGOMESA
#include <string>

#include "Objeto.h"
#include "Ninio.h"

class JuegoMesa : public Objeto {
    private: 
        int EdadRecomendada;
        int CantJugadores;
    public:
        JuegoMesa(std::string Nombre,int anio, Estado estado,int EdadRecomendado, int CantJugadores);
        virtual std::string toString();
        virtual void addNinio(Ninio*);
        virtual ~JuegoMesa();
};

#endif