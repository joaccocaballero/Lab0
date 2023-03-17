
#ifndef DTObjetoRoto
#define DTObjetoRoto

#include <string>

class DTObjetoRoto {
    private:
        std::string NombreObjeto;
        bool Prestado;
        std::string NombreNinio;
    public:
        DTObjetoRoto(std::string NombreObjeto, bool Prestado, std::string NombreNinio);
}

#endif