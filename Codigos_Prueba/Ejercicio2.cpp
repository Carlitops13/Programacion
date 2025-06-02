/**
 2)	Dadas tres cantidades proporcionadas se desea observar cuál es la mayor. 
 Realizar su programa en C++ y justifique la elección de la estructura condicional.
 */
#include <iostream>

using namespace std;

int main() {
    double cantidad1, cantidad2, cantidad3;     

    cout << "Ingrese la primera cantidad: ";
    cin >> cantidad1;                               

    cout << "Ingrese la segunda cantidad: ";
    cin >> cantidad2;
    cout << "Ingrese la tercera cantidad: ";
    cin >> cantidad3;


    if (cantidad1 >= cantidad2 && cantidad1 >= cantidad3) {
        cout << "La mayor cantidad es: " << cantidad1 << endl;
    } else if (cantidad2 >= cantidad1 && cantidad2 >= cantidad3) {
        cout << "La mayor cantidad es: " << cantidad2 << endl;
    } else {
        cout << "La mayor cantidad es: " << cantidad3 << endl;
    }
    // Usamos if-else para comparar las cantidades
    return 0;
}