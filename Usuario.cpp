//
// Created by ikery on 05/06/2021.
//

#include "Usuario.h"
#include <string.h>

Usuario::Usuario(){
    nombre= new char[1];
    nombre[0]='\0';
    contrasenia= new char[1];
    contrasenia[0]='\0';
}
Usuario::Usuario(const char* n, const char* c, int p){
    nombre=new char[strlen(n)+1];
    strcpy(nombre,n);
    contrasenia=new char[strlen(c)+1];
    strcpy(contrasenia,c);
    permiso=p;
}
Usuario:: ~Usuario(){
    delete [] nombre;
    delete [] contrasenia;
}
void Usuario::setNombre(const char* n){
    nombre=new char[strlen(n)+1];
    strcpy(nombre,n);
}
void Usuario::setContrasenia(const char* c){
    contrasenia=new char[strlen(c)+1];
    strcpy(contrasenia,c);
}
void Usuario::setPermiso(int p){
    permiso=p;
}
char* Usuario::getNombre() const{
    return nombre;
}
char* Usuario::getContrasenia() const{
    return contrasenia;
}
int Usuario::getPermiso() const{
    return permiso;
}
Usuario &Usuario::operator=(const Usuario &u){
    nombre = new char[strlen(u.nombre)+1];
    strcpy(nombre,u.nombre);
    contrasenia = new char[strlen(u.contrasenia)+1];
    strcpy(contrasenia,u.contrasenia);
    permiso=u.permiso;
    return (*this);
}