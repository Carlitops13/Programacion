#include <iostream>
#include <cmath>  

using namespace std;
int numero = 0;
int main() {
cout << "Ingrese el numero (entero) a sumatoriacubos: ";
cin >> numero;
int sumatoriacubos = (numero * (numero + 1)) / 2;
cout << " La sumatoria de sumatoriacubos de: " << numero << ", es = " << pow(sumatoriacubos,2) << endl;

    return 0;

}