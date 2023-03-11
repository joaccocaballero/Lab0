
#include <string>
#ifndef Objeto
#define Objeto

class Objeto {
    private:
     std::string Nombre;
     int anio;
     enum Estado { Nuevo, Bien_Conservado, Roto };

    public:
        virtual std::string toString() = 0;
};

#endif