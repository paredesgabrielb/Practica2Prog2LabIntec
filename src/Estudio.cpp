#include "Estudio.h"

int Estudio::objectCount = 0;
Estudio::Estudio(){
}

Estudio::Estudio(float *_muestras, int _cantidadMuestras){
    muestras = _muestras;
    cantidadMuestras = _cantidadMuestras;
    objectCount++;
}

void Estudio::setMuestras(float _muestras[]){
    muestras = _muestras;
};
float* Estudio::getMuestras(){
    return muestras;
};
int Estudio::getCantidadMuestras(){
    return cantidadMuestras;
};
void Estudio::setCantidadMuestras(int cant){
    cantidadMuestras = cant;
};
float Estudio::getMediana(){
    return 0.1;
};
float Estudio::getModa(){
    return 0.2;
};
float Estudio::getMedia(){
    return 0.3;
};
float Estudio::getDesviacionEstandar(){
    return 0.4;
};
float Estudio::getVarianza(){
    return 0.5;
};

Estudio::~Estudio()
{
    //dtor
}
