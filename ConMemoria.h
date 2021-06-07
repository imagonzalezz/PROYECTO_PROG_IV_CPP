//
// Created by ikery on 07/06/2021.
//

#ifndef PROYECTO_PROG_IV_C___CONMEMORIA_H
#define PROYECTO_PROG_IV_C___CONMEMORIA_H
#include "Dispositivo.h"

class ConMemoria:public Dispositivo{
protected:
    int ram;
    int almacenamiento;
public:
    ConMemoria();
    ConMemoria(Usuario u,char* marca, char* modelo, float precio,float pulgadas,int ram,int almacenamiento);
    virtual ~ConMemoria();
    int getRam() const;
    int getAlmacenamiento() const;
    void setRam(int r);
    void setAlmacenamiento(int a);
};

#endif //PROYECTO_PROG_IV_C___CONMEMORIA_H
