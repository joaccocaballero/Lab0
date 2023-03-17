#include <string>
#ifndef DTObjetoRoto
#define DTObjetoRoto

class DTObjetoRoto {
    private:
        std::string NombreObjeto;
        bool Prestado;
        std::string NombreNinio;
    public:
        DTObjetoRoto(std::string NombreObjeto, bool Prestado, std::string NombreNinio);
}

#endif