#pragma once

#include <string>
#include <iostream>

#include "song.h"

using namespace std;

class playlist{
    string nombre;
    vector <song*> songs;
    
public:
    playlist(string nombre);
    
    
    //operator+(song*);
    
    string getNombre() const;
    void setNombre(string nombre);

    
};
