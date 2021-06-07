//
// Created by ikery on 07/06/2021.
//

#include "Venta.h"

Venta::Venta(){

}
Venta::Venta(Usuario u, Dispositivo d){
    comprador=u;
    dispositivoComprado=d;
}
Venta:: ~Venta(){

}
Usuario Venta::getComprador() const{
    return comprador;
}
Dispositivo Venta::getDispositivo() const{
    return dispositivoComprado;
}
void Venta::setComprador(Usuario u){
    comprador=u;
}
void Venta::setDispositivo(Dispositivo d){
    dispositivoComprado=d;
}