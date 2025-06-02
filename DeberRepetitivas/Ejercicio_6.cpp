/*
4)	Realizar un programa donde el usuario ingrese un numero entero entre 1 y 20, 
el programa finaliza cuando el usuario adivine el número predeterminado.
*/
#include <iostream>

using namespace std;

int main() {
    int numeroPredeterminado = 15;
    int numeroIngresado=0;
    cout << "Ingrese un numero entero entre 1 y 20: ";
    cin >> numeroIngresado;
    while (numeroIngresado < 1 || numeroIngresado > 20) {
        cout << "Numero invalido. Ingrese un numero entre 1 y 20: ";
        cin >> numeroIngresado;
    }
    while (numeroIngresado != numeroPredeterminado) {
        cout << "Numero incorrecto. Intente nuevamente: ";
        cin >> numeroIngresado;
    }
    cout << "Felicidades! Adivinaste el numero." << endl;
    return 0;
}