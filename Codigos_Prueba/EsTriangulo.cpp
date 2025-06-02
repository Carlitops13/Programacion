/*  Enunciado:
Dados tres lados (números enteros positivos), determina si pueden formar un triángulo válido.
Reglas:

La suma de dos lados siempre debe ser mayor que el tercero.
Ejemplo:

Si los lados son 3, 4, 5 → "Sí es un triángulo".

Si son 1, 2, 10 → "No es un triángulo".*/

#include <iostream>

using namespace std;

int main() {
    int lado1=0, lado2=0, lado3=0;// Declaración de las variables para los lados del triángulo
    cout <<"Ingrese el lado 1: ";// Solicita al usuario el primer lado del triángulo
    cin >> lado1;
    cout <<"Ingrese el lado 2: ";
    cin >> lado2;
    cout<< "Ingrese el lado 3: ";
    cin>> lado3;

    if(lado1<0 || lado2<0|| lado3<0){// Verifica si alguno de los lados es negativo
        cout << "Lados no validos";

    }else if (lado1+lado2>lado3 && lado1+lado3>lado2&& lado2+lado3>lado1){// Comprueba la condición de validez del triángulo
        // La suma de dos lados debe ser mayor que el tercero
        cout << "Si es un triangulo";
    } else{
        cout<< "No es un triangulo";
    }
    
    return 0;
}