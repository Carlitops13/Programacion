#include <iostream>

#include <cmath>  

using namespace std;

int main() {
int numero = 0;
cout << "Ingrese el numero a SUMAR: ";
cin >> numero;
int sumatoriaGaus = (numero * (numero + 1)) / 2;
cout << " La sumatoria de Gauss de: " << numero << ", es = " << sumatoriaGaus << endl;

    return 0;

}