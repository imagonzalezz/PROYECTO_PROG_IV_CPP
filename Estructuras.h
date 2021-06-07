//
// Created by ikery on 07/06/2021.
//

#ifndef PROYECTO_PROG_IV_C___ESTRUCTURAS_H
#define PROYECTO_PROG_IV_C___ESTRUCTURAS_H

//Estructuras del proyecto de C, necesarias para poder leer de los ficheros.

typedef struct{
    char usuario[20];
    char con[20];
    int permiso; //1 usuario normal, 2 vendedor
}Usuario;

typedef struct{
    Usuario vendedor;
    char marca[10];
    char modelo[20];
    int pulgadas;
    int ram;
    int almacenamiento;
    float precio;
}Movil;

typedef struct{
    Usuario vendedor;
    char marca[20];
    char modelo[20];
    char procesador[20];
    int pulgadas;
    int ram;
    int almacenamiento;
    float precio;
}Portatil;

typedef struct{
    Usuario vendedor;
    char marca[20];
    char modelo[20];
    int pulgadas;
    float precio;
}Television;

typedef struct{
    Usuario u;
    Movil m;
}VentaMovil;

typedef struct{
    Usuario u;
    Portatil p;
}VentaPortatil;

typedef struct{
    Usuario u;
    Television t;
}VentaTelevision;

#endif //PROYECTO_PROG_IV_C___ESTRUCTURAS_H
