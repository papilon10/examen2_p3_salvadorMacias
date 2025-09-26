#pragma once

#include "song.h"

class pop: public song{
private:
    string genero;
    
public:
    pop(int codigo,string nombre,string artista, int duracion, string
            genero);
    void mostrarDescripcion()override;
    
    string getGenero() const;
    void setGenero(string genero);
    
};
