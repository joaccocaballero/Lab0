
#ifndef LIBRO
#define LIBRO

#include <string>
#include "Objeto.h"

class Libro: public Objeto {
    private:
        std::string Autor;
        int CantPaginas;

    public:
        Libro();
        Libro(std::string Nombre, int anio, Estado estado, std::string Autor, int CantPaginas);
        virtual std::string toString();
};

#endif

