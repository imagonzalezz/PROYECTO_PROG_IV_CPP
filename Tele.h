//
// Created by ikery on 07/06/2021.
//

#ifndef PROYECTO_PROG_IV_C___TELE_H
#define PROYECTO_PROG_IV_C___TELE_H
#include "Dispositivo.h"

class Tele: public Dispositivo{
public:
    static int numTeles;
    Tele();
    Tele(Usuario u,char* marca, char* modelo, float precio, float pulgadas);
    virtual ~Tele();
    void aniadirTele(Tele* aTeles,Tele t);
    Tele &operator=(const Tele &t);
};

#endif //PROYECTO_PROG_IV_C___TELE_H
