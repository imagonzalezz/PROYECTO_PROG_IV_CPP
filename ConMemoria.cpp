//
// Created by ikery on 07/06/2021.
//

#include "ConMemoria.h"

ConMemoria::ConMemoria():Dispositivo(){
    ram=0;
    almacenamiento=0;
}
ConMemoria::ConMemoria(Usuario u,char* marca, char* modelo, float precio,float pulgadas,int ram,int almacenamiento):Dispositivo(u,marca,modelo,precio,pulgadas){
    this->ram=ram;
    this->almacenamiento=almacenamiento;
}
ConMemoria:: ~ConMemoria(){

}
int ConMemoria::getRam() const{
    return ram;
}
int ConMemoria::getAlmacenamiento() const{
    return almacenamiento;
}
void ConMemoria::setRam(int r){
    ram=r;
}
void ConMemoria::setAlmacenamiento(int a){
    almacenamiento=a;
}