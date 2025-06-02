//
// Created by juanc on 27/5/2025.
//

#include <iostream>
using namespace  std;

int sumar (int a, int b){
    int resultadoSumaFuncion = a+b;
    return resultadoSumaFuncion;
}

int sumar(int a, int b, int c){
    return a+b+c;
}

void saludar(string nombre){
    cout << "Hola, "<<nombre<<endl;
}

double calcularPromedio(int num1, int num2, int num3){
    return static_cast<double>(num1+num2+num3)/3.0;
}

int main(){
    //int resultadoSuma = sumar(5,4);
    cout<<sumar(5,4)<<endl;
    cout<<sumar(5,4,4)<<endl;
    saludar("Juan Carlos");
    calcularPromedio(1,2,3);
    return 0;
}