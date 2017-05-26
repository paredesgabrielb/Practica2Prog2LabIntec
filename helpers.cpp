#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "header.h"
#include "Estudio.h"

using namespace std;

void imprimirCabecera() {
	cout << "|-----------------------------------|" << endl
	     << "|           PRACTICA NO.2           |" << endl
	     << "|        Tabla de frecuencia        |"<<endl
	     << "|-----------------------------------|" << endl;
}

void initMenu() {
	cout << "Cuantos estudios desea ingresar";
	cin >> CantEstudios;
	_estudios = new Estudio[CantEstudios];
	for(int x = 0; x < CantEstudios; x++ ){
        int cantMuestras = 0;
        cout << "Cuantas muestras tiene el estudio"<< x+1 << "?"<<endl;
        cin >> cantMuestras;
        float muestras[cantMuestras];
        for(int cM = 0; cM < cantMuestras; cM++ ){
            cout << "Inserte la muestra "<< cM + 1 <<" del estudio"<< x+1 << endl;
            cin >> muestras[cM];
        }
        Estudio _est(muestras,cantMuestras);
        _estudios[x] = _est;
	}
}

void limpiarPantalla() {
	system("cls");
}

