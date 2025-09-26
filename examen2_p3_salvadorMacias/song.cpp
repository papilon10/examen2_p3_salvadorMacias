#include "song.h"
#include <string>

using namespace std;

song::song( int codigo,string nombre, string artista, int duracion) {
    this->nombre = nombre;
    this->artista = artista;
    this->duracion = duracion;
    this->codigo = codigo;
}

song::~song() {
    
}


int song::getCodigo() const { return codigo; }
string song::getNombre() const { return nombre; }
string song::getArtista() const { return artista; }
int song::getDuracion() const { return duracion; }

void song::setCodigo(int codigo){this->codigo=codigo; }
void song::setNombre(string nombre){this->nombre=nombre;}
void song::setArtista(string artista){this->artista=artista;}
void song::setDuracion(int duracion){this->duracion=duracion;}


