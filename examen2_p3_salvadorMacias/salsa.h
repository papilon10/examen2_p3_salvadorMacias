#pragma once

#include "song.h"

class salsa: public song{
private:
    string genero;
    
public:
    salsa(int codigo,string nombre,string artista, int duracion, string
            genero);
    void mostrarDescripcion()override;
    
    string getGenero() const;
    void setGenero(string genero);
    
};
