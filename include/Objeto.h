
#include <string>
#ifndef Objeto
#define Objeto

enum Estado { Nuevo, Bien_Conservado, Roto }

class Objeto {
    private:
        std::string Nombre;
        int anio;
        Estado estado;
        Niño *niño;
    public:
        Objeto(string, int);
        virtual std::string toString() = 0;
        string getNombre();
        int getAnio();
        void addNinio();
        Estado getEstado();
        ~Objeto();
};

#endif