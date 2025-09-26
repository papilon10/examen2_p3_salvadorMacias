#pragma once

#include "song.h"

class bachata: public song{
private:
    string genero;
    
public:
    bachata(int codigo,string nombre,string artista, int duracion, string
            genero);
    void mostrarDescripcion()override;
    
    string getGenero() const;
    void setGenero(string genero);
    
};
