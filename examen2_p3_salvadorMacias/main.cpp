#include <iostream>
#include <vector>

#include "playlist.h"
#include "song.h"
#include "bachata.h"
#include "salsa.h"
#include "pop.h"


vector <song*> songs;
vector <playlist*> playlists;

using namespace std;

void crear_playlist(){
    //playlist* nuevaPlay=nullptr;
    string nombre;
    cout<<"ingrese el nombre de su playlist: "<<endl;
    cin>>nombre;
   //nuevaPlay=new playlist( nombre);
   // playlists.push_back(nuevaPlay);
    
    
}

void crear_cancion(){
    song* nuevaCancion = nullptr;
    
    int codigo;
    int duracion;
    string nombre;
    string artista;
    string genero;
    int genero_opc;
    
    
    cout<<"ingrese codigo de la cancion: "<<endl;
    cin>>codigo;
    cout<<"ingrese duracion de la cancion: "<<endl;
    cin>>duracion;
    cout<<"ingrese nombre de la cancion: "<<endl;
    cin>>nombre;
    cout<<"ingrese artista de la cancion: "<<endl;
    cin>>artista;
    cout<<"1.bachata"<<endl<<"2.salsa"<<endl<<"3.pop"<<endl;
    cout<<"ingrese genero: "<<endl;
    cin >>genero_opc;
    switch (genero_opc) {
        case 1:
            genero="bachata";
            nuevaCancion= new bachata(codigo, nombre, artista,  duracion,
             genero);
            songs.push_back(nuevaCancion);

            cout<<"polla";
            
            break;
        case 2:
            genero="salsa";
            nuevaCancion= new salsa(codigo, nombre, artista,  duracion,
             genero);
            songs.push_back(nuevaCancion);

            
            break;
        case 3:
            genero="pop";
            
            nuevaCancion= new pop(codigo, nombre, artista,  duracion,
             genero);
            songs.push_back(nuevaCancion);

            break;
         
            //if (nuevaCancion != nullptr) {
                songs.push_back(nuevaCancion);
                
                
                cout << "cancion creada exitosamente!" << endl;
            //}

    }
    
}

void guardar_playlists(){
    if (playlists.empty()) {
        cout<<"no hay playlists creadas"<<endl;
    }else{
        
    }
}

void cargar_playlists(){
    if (playlists.empty()) {
        cout<<"no hay playlists creadas"<<endl;
    }else{
        
    }
}

void eliminar_playlists(){
    int indice;
    if (playlists.empty()) {
        cout<<"no hay playlists creadas"<<endl;
    }else{
        for (int i=0; i<playlists.size(); i++) {
          //  cout<< i << " )." << "" << playlists[i]->getNombre();
        }
        cout<<"seleccione indice de playlist a eliminar: ";
        cin>>indice;
       // playlists[indice].
    }
}

void agregar_cancionPlaylist(){
    int indice_play;
    int indice_cancion;

    if (playlists.empty()||songs.empty()) {
        cout<<"no hay canciones o playlists para usar"<<endl;
    }else{
        for (int i=0; i<playlists.size(); i++) {
           // cout<< i << " )." << "" << playlists[i]->getNombre();
        }
        cout<<"seleccione indice de playlist a usar: ";
        cin>>indice_play;
        for (int i=0; i<songs.size(); i++) {
            cout<< i << " )." << "" << songs[i]->getNombre();
        }
        cout<<"seleccione indice de cancion a usar: ";
        cin>>indice_cancion;
        //playlists[indice_play]->playlist.pushback
    }
}



void ver_canciones(){
    if (songs.empty()) {
        cout<<"no hay canciones agregadas"<<endl;
        
    }else{
        for (int i=0; i<songs.size(); i++) {
            cout<< i << " )" <<endl<<
            "codigo: "<<songs[i]->getCodigo()<<endl
            <<"nombre: "<<songs[i]->getNombre()<<endl
            <<"artista: "<<songs[i]->getArtista()<<endl
            <<"duracion: "<<songs[i]->getDuracion()<<endl;
        }
    }
}

void guardar_canciones(){
    if (songs.empty()) {
        cout<<"no hay canciones para guardar"<<endl;
    }else{
        
    }
}
void cargar_canciones(){
    if (songs.empty()) {
        cout<<"no hay canciones para guardar"<<endl;
    }else{
        
    }
}

void ver_playlists(){
    if (playlists.empty()) {
        cout<<"no hay playlists disponibles"<<endl;
    }else{
        for (int i=0; i<playlists.size(); i++) {
            cout<< i <<" )." << playlists[i];
        }
        
    }
}

void ver_playlist(){
    int indice;
    if (playlists.empty()) {
        cout<<"no hay playlists disponibles"<<endl;
    }else{
        for (int i=0; i<playlists.size(); i++) {
            cout<< i <<" )." << playlists[i];
            cout<<"ingrese indice de la playlist a reproducir: "<<endl;
            cin>>indice;
            
        }
        
    }
}

void spotify(){
    int opc_spotify;
    bool sesion=false;
    do {
        cout<<endl<<endl;
        cout<<"---menu---"<<endl;
        cout<<"1. crear playlist"<<endl;
        cout<<"2. crear Canción"<<endl;
        cout<<"3. guardar playlists"<<endl;
        cout<<"4. cargar playlists"<<endl;
        cout<<"5. eliminar playlists"<<endl;
        cout<<"6. agregar cancion a playlist"<<endl;
        cout<<"7. eliminar cancion de playlist"<<endl;
        cout<<"8. vaciar playlist"<<endl;
        cout<<"9. reproducir playlist"<<endl;
        cout<<"10. ver playlist"<<endl;
        cout<<"11. ver todas las playlists"<<endl;
        cout<<"12. ver canciones"<<endl;
        cout<<"13. guardar canciones"<<endl;
        cout<<"14. cargar canciones"<<endl;
        cout<<"15. cerrar sesion"<<endl;
        cin>>opc_spotify;
        switch (opc_spotify) {
            case 1:
                crear_playlist();
                break;
            case 2:
                crear_cancion();
                break;
            case 3:
                guardar_playlists();
                break;
            case 4:
                cargar_playlists();
                break;
            case 5:
                eliminar_playlists();
                break;
            case 6:
                agregar_cancionPlaylist();
                break;
            case 7:
                
                break;
            case 8:
                
                break;
            case 9:
                
                break;
            case 10:
                ver_playlist();
                break;
            case 11:
                ver_playlists();
                break;
            case 12:
                ver_canciones();
                break;
            case 13:
                guardar_canciones();
                break;
            case 14:
                cargar_canciones();
                break;
            case 15:
                cout<<"cerrando sesion"<<endl;
                sesion=true;
                
                break;
            default:
                cout<<"la opcion ingresada es invalida"<<endl;
                break;
        }
        
        
    } while (sesion!=true);
}

void menu(){
    bool salida=false;
    int opc_menu;
    do {
        cout<<"ejercicios"<<endl<<"1. spotify++"<<endl<<"2. salir"<<endl;
        cin>>opc_menu;
        switch (opc_menu) {
            case 1:
                spotify();
                break;
            case 2:
                cout<<"se abandonara el programa"<<endl;
                salida=true;
            default:
                cout<<"opcion ingresada es invalida"<<endl;
                break;
        }
        
    } while (salida!=true);
}

int main(int argc, const char * argv[]) {
    menu();
}
