//
// Created by ikery on 07/06/2021.
//

#ifndef PROYECTO_PROG_IV_C___TELEFONO_H
#define PROYECTO_PROG_IV_C___TELEFONO_H
#include "ConMemoria.h"


class Telefono: public ConMemoria{
public:
    static int numTelefonos;
    Telefono();
    Telefono(Usuario u,char* marca, char* modelo, float precio,float pulgadas,int ram,int almacenamiento);
    virtual ~Telefono();
    void aniadirTelefono(Telefono* aTelefonos,Telefono t);
    Telefono &operator=(const Telefono &t);
};

#endif //PROYECTO_PROG_IV_C___TELEFONO_H
