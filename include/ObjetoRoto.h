
#ifndef _DTOBJETOROTOH
#define _DTOBJETOROTOH

#include <string>

class DTObjetoRoto {
    private:
        std::string NombreObjeto;
        bool Prestado;
        std::string NombreNinio;
    public:
        DTObjetoRoto(std::string NombreObjeto, bool Prestado, std::string NombreNinio);
        std::string getNombre();
        bool enPrestamo();
        std::string getNinioPrestado();
        ~DTObjetoRoto();
};

#endif