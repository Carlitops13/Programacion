#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double cateto1=0.0;
    double cateto2=0.0;
    double hipotenusa=0.0;
    cout << "Ingrese la longitud del cateto 1: ";
    cin >> cateto1;
    cout <<"Ingrese la longitud del cateto 2: ";
    cin >> cateto2;

    hipotenusa= sqrt(pow(cateto1,2)+pow(cateto2,2));
    
    cout  <<"La longitud de la hipotenusa es: " << fixed << setprecision(2) << hipotenusa << endl;

    return 0;
}