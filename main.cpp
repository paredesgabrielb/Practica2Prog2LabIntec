#include <stdio.h>
#include <iostream>
#include <tchar.h>
#include <windows.h>
#include "header.h"
#include "Estudio.h"

/**
 * Practica:    No 2
 * Materia:     Lab. Programacion 2
 * Autor:       Gabriel Paredes
 * Id:          1072445
 * Horario:     Viernes 8-10pm
 */

/** Practica 2 :
* Tabla de frecuencia
//  Cantidad x de estudio
//  Cantidad y de muestras
//  1. Cuantos estudios desea ingresar
//  -Iniciando estudio 1
//  --Cuantas muestras tiene el estudio?
//  -10
//  -Digite los 10 datos (tipo float)
//  Va al menu y imprime mediana, moda, moda, desviacion standar, varianza
//		sergio.lopez@gmail.com
//		Titulo : LP_01_Matricula
*/
using namespace std;
void run();

int main()
{
    initMenu();
    run();
	system("pause");
	return 0;
}

void run(){
    cout << "Hay "<< CantEstudios <<" Estudios" <<endl;
    cout << "Que estudio desea ver: " <<endl;
    int noEst;
    cin >> noEst;
    Estudio estudioElegido = _estudios[noEst];

	cout    << "Mediana"<< "\n\t\t" << estudioElegido.getMediana()<<endl
            << "Media"<< "\n\t\t"  << estudioElegido.getMedia()<<endl
            << "Moda"<< "\n\t\t"  << estudioElegido.getModa() <<endl
            << "Desviacion Estandar"<< "\n\t\t"  << estudioElegido.getDesviacionEstandar()<< endl
            << "Varianza"<< "\n\t\t"  << estudioElegido.getVarianza()<< endl;

    cout << "\n\n"
        << "1. Ver otro estudio" <<endl
        << "2. Insertar Datos nuevamente" <<endl
        << "3. Salir" << endl;
    int opcion;
    cin >> opcion;
    switch(opcion){
        case 1:
            run();
            break;
        case 2:
            initMenu();
            break;
        case 3:
            system("pause");
            break;
        default:
            system("pause");
    }

}
