/*  
2)	Generar dos versiones de programa en uno haga uso de while
 y en otro del for a fin de que reciba un número positivo impar, 
 de tal manera que dibuje un triángulo equilatero con asteriscos.
*/

#include <iostream>

using namespace std;

int main() {
     
    int n;
    int i = 1; // Inicializamos i para el bucle while
    cout << "Ingrese un numero positivo impar: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "El numero debe ser impar." << endl;
        return -1;
    }else if (n < 0) {
        cout << "El numero debe ser positivo." << endl;
        return -1;
    }else{
      while (n > 0) {
       
    while (i <= n) {
        int j = 0;
        while (j < (n - i) / 2) {
            cout << " ";
            j++;
        }

        int k = 0;
        while (k < i) {
            cout << "*";
            k++;
        }

        cout << endl;
        i += 2;
    }

    return 0;// Reducimos en 2 para mantener la forma del triángulo
    }
    return 0;
    }
    // Versión con for
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}