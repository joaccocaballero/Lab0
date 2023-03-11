
#include <string>
#ifndef Objeto
#define Objeto

enum Estado { Nuevo, Bien_Conservado, Roto }

class Objeto {
    protected:
     std::string Nombre;
     int anio;
     Estado estado;

    public:
        Objeto(string, int);
        virtual std::string toString() = 0;
        string getNombre();
        int getAnio();
        Estado getEstado();
};

#endif