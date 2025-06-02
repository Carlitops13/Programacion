//
// Created by juanc on 27/5/2025.
//
//Solicitar la base y la altura de un rectángulo
// y calcular el área y el perímetro
#include <iostream>
using namespace std;

double calcularArea(double base, double altura){// Función para calcular el área del rectángulo

    return base * altura;// Retorna el área calculada
}

double calcularPerimetro(double base, double altura){// Función para calcular el perímetro del rectángulo
    double perimetro = 2*(base+altura);// Calcula el perímetro como 2 veces la suma de la base y la altura
    return perimetro;// Retorna el perímetro calculado
}

void pedirDatos(double &base, double &altura){// Función para solicitar al usuario la base y la altura del rectángulo
    // Utiliza referencias para modificar las variables base y altura directamente
    cout<<"Ingrese la base del rectangulo: "<<endl;// Solicita al usuario la base del rectángulo
    cin>>base;// Lee la base ingresada por el usuario
    cout<<"Ingrese la altura del rectangulo: ";
    cin>>altura;
}

int main(){
    double base, altura;
    pedirDatos(base,altura);// Llama a la función para pedir los datos de base y altura
    cout<<"El area del rectangulo es : "<<calcularArea(base,altura)<<endl;
    cout<<"El perimetro del rectangulo es: "<<calcularPerimetro(base,altura)<<endl;
    return 0;
}
