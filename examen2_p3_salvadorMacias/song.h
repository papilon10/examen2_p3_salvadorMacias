#pragma once

#include <string>
#include <iostream>


using namespace std;

class song{
    int codigo;
    string nombre;
    string artista;
    int duracion;
    
public:
    song(int codigo,string nombre,string artista, int duracion);
    
    virtual ~song();
    virtual void mostrarDescripcion() = 0;

    
    int getCodigo() const;
    string getNombre() const;
    string getArtista() const;
    int getDuracion() const;
    
    void setNombre(string nombre);
    void setArtista(string artista);
    void setCodigo(int codigo);
    void setDuracion(int duracion);
};
