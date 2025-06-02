//
// Created by juanc on 20/5/2025.
//

#include <iostream>
using namespace  std;

int main() {

        int opcion = 0;

        while (opcion != 2) {
            cout << "Menu de opciones:\n";
            cout << "1. Saludar\n";
            cout << "2. Salir\n";
            cout << "Seleccione una opcion: ";
            cin >> opcion;

            // Evaluamos la opción ingresada
            if (opcion == 1) {
                cout << "Hola Espero que tengas un gran día.\n\n";
            } else if (opcion != 2) {
                cout << "Opción no valida. Intente nuevamente.\n\n";
            }
        }

        cout << "Programa terminado.\n";

}

