
#include <string>
#ifndef LIBRO
#define LIBRO
#include "Objeto.h"

class Libro: public Objeto {
    private:
        std::string Autor;
        int CantPaginas;

    public:
        std::string toString();
};

#endif

