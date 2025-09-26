#include "salsa.h"

salsa::salsa(int codigo, string nombre,string artista, int duracion,string genero)
:song( codigo,  nombre,  artista,  duracion){
    this->genero=genero;
}

void salsa::mostrarDescripcion(){
    cout<<"nombre de la cancion: "<<song::getNombre()<<endl;
    cout<<"artista de la cancion: "<<song::getArtista()<<endl;
    cout<<"duracion de la cancion: "<<song::getDuracion()<<endl;
    cout<<"codigo de la cancion: "<<song::getCodigo()<<endl;

}
