#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un número para mostrar su tabla de multiplicar: ";
    cin >> numero;

    for (int i = 1; i <= 10; i++) {
        cout << numero << "x" << i << "=" << numero * i << endl;
    }

    return 0;
}
