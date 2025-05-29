/*  
1)	Generar un programa que reciba un número positivo y que dibuje el triángulo en las siguientes formas:
noventa grados, invertido con asteriscos
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero positivo: ";
    cin >> n;
    for (size_t i = 1; i < n; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Triangulo invertido:" << endl;
    for (size_t i = n; i > 0; i--)
    {
        for (size_t j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}