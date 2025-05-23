#include <iostream>

using namespace std;
double duracion = 0.0;
double costoBase = 0.0;
bool tiempo = true;



int main() {
    cout << "Escriba la duraion de la llamda: ";
    cin >> duracion;
    bool tiempo = duracion > 10;
    double costoBase = ( duracion) * 0.13;
    double precioFinal = (costoBase * 0.16) + costoBase;
    double descuento = (precioFinal*0.05*tiempo);
    cout<< " precio final: " << (precioFinal - descuento );
   

    return 0;
}