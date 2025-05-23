#include <iostream>

using namespace std;

int main() {
    double duracion=0.0;
    cout <<"Ingrese la duracion de la llamada en minutos:";
    cin>>duracion;

    double costoBase=duracion*0.13;
    double iva=costoBase*0.16;
    bool aplicaDescuento=duracion>10;
    double descuento= costoBase+iva*0.05*aplicaDescuento;
    double costoTotal=costoBase+iva-(descuento); 

    cout << "El costo total de la llamada es: " << costoTotal << endl;
    cout << "Descuento aplicado: " << descuento << endl;

    return 0;
}