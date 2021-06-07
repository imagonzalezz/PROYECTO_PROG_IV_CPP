//
// Created by ikery on 07/06/2021.
//

#include "Telefono.h"
#include "Usuario.h"
#include <string.h>

int Telefono::numTelefonos=0;

Telefono::Telefono():ConMemoria(){

}
Telefono::Telefono(Usuario u,char* marca, char* modelo, float precio,float pulgadas,int ram,int almacenamiento):ConMemoria(u,marca, modelo, precio,pulgadas,ram,almacenamiento){

}
Telefono:: ~Telefono(){

}

void Telefono::aniadirTelefono(Telefono* aTelefonos,Telefono t){
    if (numTelefonos==0){
        aTelefonos = new Telefono[1];
        aTelefonos[0]=t;
        numTelefonos++;
    }else{
        Telefono* aux = new Telefono[numTelefonos];
        for (int i = 0; i < numTelefonos; ++i) {
            aux[i]=aTelefonos[i];
        }
        delete [] aTelefonos;
        aTelefonos=new Telefono[numTelefonos+1];
        for (int i = 0; i < numTelefonos; ++i) {
            aTelefonos[i]=aux[i];
        }
        aTelefonos[numTelefonos]=t;
        numTelefonos++;
        delete [] aux;
    }
}
Telefono &Telefono::operator=(const Telefono &t){
    vendedor = t.vendedor;
    marca= new char[strlen(t.marca)+1];
    strcpy(marca,t.marca);
    modelo= new char[strlen(t.modelo)+1];
    strcpy(modelo,t.modelo);
    precio=t.precio;
    pulgadas=t.pulgadas;
    ram=t.ram;
    almacenamiento=almacenamiento;
    return (*this);
}
