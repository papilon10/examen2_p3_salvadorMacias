#include <iostream>
#include <vector>

#include "song.h"

vector <song*> songs;


using namespace std;

void crear_playlist(){
    
}

void crear_cancion(){
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
    
    cout<<"1.bachata"<<endl<<"2.salsa"<<"3.pop"<<endl;
    cout<<"ingrese genero: "<<endl;
    cin >>genero_opc;
    if (genero_opc==1) {
        genero="bachata";
        
    }else if(genero_opc==2){
        genero="salsa";
    }else if(genero_opc==3){
        genero="pop";
    }else{
        cout<<"opcion de genero ingresada es invalida";
        
    }
    
}

void spotify(){
    int opc_spotify;
    bool sesion=false;
    do {
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
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                
                break;
            case 5:
                
                break;
            case 6:
                
                break;
            case 7:
                
                break;
            case 8:
                
                break;
            case 9:
                
                break;
            case 10:
                
                break;
            case 11:
                
                break;
            case 12:
                
                break;
            case 13:
                
                break;
            case 14:
                
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
