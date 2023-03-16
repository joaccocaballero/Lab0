
#include <string>
#ifndef LIBRO
#define LIBRO
#include "Objeto.h"

class Libro: public Objeto {
    private:
        std::string Autor;
        int CantPaginas;

    public:
        Libro();
        Libro(std::string, int);
        virtual std::string toString();
};

#endif

