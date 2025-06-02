//
// Created by juanc on 27/5/2025.
//

#include <iostream>
#include <iterator>
using namespace std;

int main(){
    string dias[5] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes"};// Declaración de un arreglo de strings con los días de la semana
    int tamano = sizeof(dias)/sizeof(dias[0]);// Calcula el tamaño del arreglo dividiendo el tamaño total del arreglo por el tamaño de un elemento
    //cout<<tamano;
//    for(int i = 0; i < sizeof(dias)/sizeof(dias[0]); i++){
//        cout<<dias[i]<<endl;
//    }
    for(string d : dias){// Utiliza un bucle for-each para recorrer el arreglo de días
        cout<<d<<endl;
    }
}
