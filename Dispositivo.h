//
// Created by ikery on 05/06/2021.
//

#ifndef PROYECTO_PROG_IV_C___DISPOSITIVO_H
#define PROYECTO_PROG_IV_C___DISPOSITIVO_H

#include "Usuario.h"

class Dispositivo{
protected:
    Usuario vendedor;
    char *marca;
    char *modelo;
    float precio;
    float pulgadas;
public:
    Dispositivo();
    Dispositivo(Usuario u,char* marca, char* modelo, float precio,float pulgadas);
    virtual ~Dispositivo();
    void setVendedor(Usuario u);
    void setMarca(const char* m);
    void setModelo(const char* m);
    void setPrecio(float precio);
    void setPulgadas(float pulgadas);
    Usuario getVendedor() const;
    char* getMarca() const;
    char* getModelo() const;
    float getPrecio() const;
    float getPulgadas() const;
};

#endif //PROYECTO_PROG_IV_C___DISPOSITIVO_H
