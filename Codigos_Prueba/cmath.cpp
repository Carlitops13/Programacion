#include <iostream>
#include <cmath>  // Biblioteca para funciones matemáticas
using namespace std;

int main() {
    double numero;

    cout << "Ingresa un número positivo: ";
    cin >> numero;

    cout << "\n=== Operaciones Matemáticas con cmath ===" << endl;
    cout << "Raíz cuadrada: sqrt(" << numero << ") = " << sqrt(numero) << endl;
    cout << "Raíz cúbica: cbrt(" << numero << ") = " << cbrt(numero) << endl;
    cout << "Potencia al cubo: pow(" << numero << ", 3) = " << pow(numero, 3) << endl;
    cout << "Valor absoluto: abs(" << numero << ") = " << abs(numero) << endl;

    cout << "\n=== Funciones Trigonométricas (en radianes) ===" << endl;
    cout << "Seno: sin(" << numero << ") = " << sin(numero) << endl;
    cout << "Coseno: cos(" << numero << ") = " << cos(numero) << endl;
    cout << "Tangente: tan(" << numero << ") = " << tan(numero) << endl;

    cout << "\n=== Logaritmos ===" << endl;
    cout << "Logaritmo natural: log(" << numero << ") = " << log(numero) << endl;
    cout << "Logaritmo base 10: log10(" << numero << ") = " << log10(numero) << endl;

    cout << "\n=== Redondeo ===" << endl;
    cout << "Redondeado: round(" << numero << ") = " << round(numero) << endl;
    cout << "Redondeo hacia abajo: floor(" << numero << ") = " << floor(numero) << endl;
    cout << "Redondeo hacia arriba: ceil(" << numero << ") = " << ceil(numero) << endl;

    return 0;
}
