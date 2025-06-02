//
// Ingresar dos números por teclado, sumar y restar los
// números y verificar si los números son pares o impares
//
#include <iostream>
using namespace std;
double num1;
double num2;

double sumar(double num1, double num2){
    return num1+num2;
}

double restar(double num1, double num2){
    return num1-num2;
}

void validarParImpar(double num){
    if(int(num) % 2 == 0){
        cout<<"El numero "<<num<<" es par"<<endl;
    }else{
        cout<<"El numero "<< num << " es impar"<<endl;
    }
}

void pedirDatos(){
    cout<<"Escriba el primero numero: ";
    cin>>num1;
    cout<<"Escriba el segundo numero: ";
    cin>>num2;
}
int main(){
    pedirDatos();
    cout<<"La suma es: "<<sumar(num1,num2)<<endl;
    double sumaTotal = sumar(num1,num2);
    cout<<"La resta es: "<<restar(num1,num2)<<endl;
    validarParImpar(num1);
    validarParImpar(num2);
    return 0;
}