//
// Created by ikery on 07/06/2021.
//

#ifndef PROYECTO_PROG_IV_C___ORDENADOR_H
#define PROYECTO_PROG_IV_C___ORDENADOR_H
#include "ConMemoria.h"

class Ordenador: public ConMemoria{
    char* procesador;
public:
    static int numOrdenadores;
    Ordenador();
    Ordenador(Usuario u,char* marca, char* modelo, float precio,float pulgadas,int ram,int almacenamiento,char* procesador);
    virtual ~Ordenador();
    void aniadirOrdenador(Ordenador* aOrdenadores,Ordenador o);
    Ordenador &operator=(const Ordenador &t);
};

#endif //PROYECTO_PROG_IV_C___ORDENADOR_H
