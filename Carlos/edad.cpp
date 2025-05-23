#include <iostream>

using namespace std;

int main() {
    unsigned int edad=0;
    cout << "Ingrese su edad: ";
    cin>> edad;

    cout <<"Su edad en meses es: "<<edad*12<<endl;
    cout << "Su edad en semanas es: "<< edad*52<<endl;
    cout << "Su edad en dias es: "<< edad*365<<endl;
    cout << "Su edad en horas es: "<< edad*365*24<<endl ;
    return 0;
}