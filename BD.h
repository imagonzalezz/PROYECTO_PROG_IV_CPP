//
// Created by ikery on 07/06/2021.
//

#ifndef PROYECTO_PROG_IV_C___BD_H
#define PROYECTO_PROG_IV_C___BD_H
#include "Dispositivo.h"
#include "sqlite3.h"


class BD{
    sqlite3 *db;
    sqlite3_stmt *stmt;
    char* nombreBD;
public:
    BD(char* nbd);
    void crearBD();
    void insertarDispositivo(Dispositivo d);
    int abrirBD();
    virtual ~BD();

};

#endif //PROYECTO_PROG_IV_C___BD_H
