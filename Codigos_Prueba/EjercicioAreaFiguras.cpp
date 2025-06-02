//
// Se desea un programa para que por medio funciones
//realice el calculo del area de un triangulo, circulo, cuadrado.
//  El usuario selecciona la operación
// de calculo en base a un menú.
//
#include <iostream>
using namespace std;

const double PI = 3.1416; // Definir PI

// Función para solicitar la base y la altura y calcular el area de un triangulo
double calcularAreaTriangulo() {
    double base, altura;
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    return (base * altura) / 2;
}

// Función para solicitar el radio y calcular el area de un circulo
double calcularAreaCirculo() {
    double radio;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    return PI * radio * radio;
}

// Función para solicitar el lado y calcular el area de un cuadrado
double calcularAreaCuadrado() {
    double lado;
    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;
    return lado * lado;
}

// Función para mostrar el menú y procesar la selección del usuario
void mostrarMenu() {
    int opcion;
    do {
        cout << "\nMenu de calculo de areas:\n";
        cout << "1. triangulo\n";
        cout << "2. circulo\n";
        cout << "3. Cuadrado\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;


        // Procesar opción seleccionada
        switch (opcion) {
            case 1:
                cout << "area del triangulo: " << calcularAreaTriangulo() << " \n";
                break;
            case 2:
                cout << "area del circulo: " << calcularAreaCirculo() << " \n";
                break;
            case 3:
                cout << "area del cuadrado: " << calcularAreaCuadrado() << " \n";
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción invalida, intenta nuevamente.\n";
                break;
        }
    } while (opcion != 4);
}

int main() {
    mostrarMenu();
    return 0;
}