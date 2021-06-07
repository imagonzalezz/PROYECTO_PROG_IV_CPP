//
// Created by ikery on 07/06/2021.
//

#include "BD.h"
#include <string.h>
#include <iostream>
using namespace std;

BD::BD(char *nbd) {
    nombreBD = new char[strlen(nbd)+1];
    strcpy(nombreBD,nbd);
}

void BD::crearBD()
{

    if (sqlite3_open(nombreBD, &db)) {
        cout << "ERROR!!" << endl;
    } else {
        char *sentencia = "CREATE TABLE VENTA(USUARIO CHAR(20), DISPOSITIVO CHAR(20));";
        sqlite3_exec(db, sentencia, NULL, 0, 0);
    }
}

int BD::abrirBD(){
    int result = sqlite3_open(nombreBD, &db);
    if(result != SQLITE_OK){
        cout<<"ERROR!! No se ha podido abrir la Base de Datos";
    }

    return result;
}

void BD::insertarDispositivo(Dispositivo d){
    char query[100];
    sprintf(query,"INSERT INTO VENTA VALUES ('%s','%s')", d.getVendedor().getNombre(), d.getModelo());
    sqlite3_prepare_v2(db, query, strlen(query) + 1, &stmt, NULL);
    sqlite3_step(stmt);
    sqlite3_finalize(stmt);
}
