//
// Created by ikery on 07/06/2021.
//

#include "Ordenador.h"
#include <string.h>

int Ordenador::numOrdenadores=0;

Ordenador::Ordenador():ConMemoria(){
    procesador=new char[1];
    procesador[0]='\0';
}
Ordenador::Ordenador(Usuario u,char* marca, char* modelo, float precio,float pulgadas,int ram,int almacenamiento,char* procesador):ConMemoria(u,marca, modelo, precio,pulgadas,ram,almacenamiento){
    this->procesador=new char[strlen(procesador)+1];
    strcpy(this->procesador,procesador);
}
Ordenador:: ~Ordenador(){
    delete [] procesador;
}
void Ordenador::aniadirOrdenador(Ordenador* aOrdenadores,Ordenador o){
    if (numOrdenadores==0){
        aOrdenadores = new Ordenador[1];
        aOrdenadores[0]=o;
        numOrdenadores++;
    }else {
        Ordenador *aux = new Ordenador[numOrdenadores];
        for (int i = 0; i < numOrdenadores; ++i) {
            aux[i] = aOrdenadores[i];
        }
        delete[] aOrdenadores;
        aOrdenadores = new Ordenador[numOrdenadores + 1];
        for (int i = 0; i < numOrdenadores; ++i) {
            aOrdenadores[i] = aux[i];
        }
        aOrdenadores[numOrdenadores] = o;
        numOrdenadores++;
        delete[] aux;
    }
}
Ordenador &Ordenador::operator=(const Ordenador &t){
    vendedor = t.vendedor;
    marca= new char[strlen(t.marca)+1];
    strcpy(marca,t.marca);
    modelo= new char[strlen(t.modelo)+1];
    strcpy(modelo,t.modelo);
    precio=t.precio;
    pulgadas=t.pulgadas;
    ram=t.ram;
    almacenamiento=t.almacenamiento;
    procesador=new char[strlen(t.procesador)+1];
    strcpy(procesador,t.procesador);
    return (*this);
}
