//
// Created by ikery on 07/06/2021.
//

#ifndef PROYECTO_PROG_IV_C___VENTA_H
#define PROYECTO_PROG_IV_C___VENTA_H
#include "Usuario.h"
#include "Dispositivo.h"

class Venta{
protected:
    Usuario comprador;
    Dispositivo dispositivoComprado;
public:
    Venta();
    Venta(Usuario u, Dispositivo d);
    virtual ~Venta();
    Usuario getComprador() const;
    Dispositivo getDispositivo() const;
    void setComprador(Usuario u);
    void setDispositivo(Dispositivo d);
};

#endif //PROYECTO_PROG_IV_C___VENTA_H
