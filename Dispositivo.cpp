//
// Created by ikery on 05/06/2021.
//

#include "Dispositivo.h"
#include <string.h>

Dispositivo::Dispositivo(){
    marca=new char[1];
    marca[0]='\0';
    modelo=new char[1];
    modelo[0]='\0';
    precio=0;
    pulgadas=0;
}
Dispositivo::Dispositivo(Usuario u,char* marca, char* modelo, float precio,float pulgadas){
    vendedor=u;
    marca=new char[strlen(marca)+1];
    strcpy(this->marca,marca);
    modelo=new char[strlen(modelo)+1];
    strcpy(this->modelo,modelo);
    this->pulgadas=pulgadas;
    this->precio=precio;
}
Dispositivo:: ~Dispositivo(){
    delete [] marca;
    delete [] modelo;
}
void Dispositivo::setVendedor(Usuario u) {
    vendedor=u;
}
void Dispositivo::setMarca(const char* m){
    marca=new char[strlen(m)+1];
    strcpy(marca,m);
}
void Dispositivo::setModelo(const char* m){
    modelo=new char[strlen(m)+1];
    strcpy(modelo,m);
}
void Dispositivo::setPrecio(float precio){
    this->precio=precio;
}
void Dispositivo::setPulgadas(float pulgadas){
    this->pulgadas=pulgadas;
}
Usuario Dispositivo::getVendedor() const{
    return vendedor;
}
char* Dispositivo::getMarca() const{
    return marca;
}
char* Dispositivo::getModelo() const{
    return modelo;
}
float Dispositivo::getPrecio() const{
    return precio;
}
float Dispositivo::getPulgadas() const{
    return pulgadas;
}