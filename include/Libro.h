
#ifndef LIBRO
#define LIBRO

#include <string>
#include "Objeto.h"
#include "Ninio.h"

class Libro: public Objeto {
    private:
        std::string Autor;
        int CantPaginas;

    public:
        Libro();
        Libro(std::string Nombre, int anio, Estado estado, std::string autor, int CantPaginas);
        virtual std::string toString();
        virtual void addNinio(Ninio*);
        virtual ~Libro();
};

#endif

