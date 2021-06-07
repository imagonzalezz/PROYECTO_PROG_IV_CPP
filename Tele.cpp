//
// Created by ikery on 07/06/2021.
//

#include "Tele.h"
#include <string.h>

int Tele::numTeles=0;
Tele::Tele():Dispositivo(){

}
Tele::Tele(Usuario u,char* marca, char* modelo, float precio, float pulgadas):Dispositivo(u,marca,modelo,precio,pulgadas){

}
Tele:: ~Tele(){

}
void Tele::aniadirTele(Tele* aTeles,Tele t){
    if (numTeles==0){
        aTeles = new Tele[1];
        aTeles[0]=t;
        numTeles++;
    }else{
        Tele* aux = new Tele[numTeles];
        for (int i = 0; i < numTeles; ++i) {
            aux[i]=aTeles[i];
        }
        delete [] aTeles;
        aTeles=new Tele[numTeles+1];
        for (int i = 0; i < numTeles; ++i) {
            aTeles[i]=aux[i];
        }
        aTeles[numTeles]=t;
        numTeles++;
        delete [] aux;
    }
}
Tele &Tele::operator=(const Tele &t){
    vendedor = t.vendedor;
    marca= new char[strlen(t.marca)+1];
    strcpy(marca,t.marca);
    modelo= new char[strlen(t.modelo)+1];
    strcpy(modelo,t.modelo);
    precio=t.precio;
    pulgadas=t.pulgadas;
    return (*this);
}
