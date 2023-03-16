
#include <string>
#ifndef Objeto
#define Objeto

#include "Ninio.h"

const int MAX_OBJETOS = 50;

enum Estado { Nuevo, Bien_Conservado, Roto };

class Objeto {
    private:
        std::string Nombre;
        int anio;
        Estado estado;
        Ninio *ninio;
    public:
        Objeto(std::string, int, Estado);
        virtual std::string toString() = 0;
        std::string getNombre();
        int getAnio();
        void addNinio();
        Estado getEstado();
        ~Objeto();
};

#endif