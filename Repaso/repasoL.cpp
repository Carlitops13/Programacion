/*  Un sistema de transporte cobra así:

$5 si el pasajero es menor de 10 años o mayor de 60.

$10 si tiene entre 18 y 60 años (incluidos).

$7 en cualquier otro caso (adolescentes).

Escribe un programa que:

Pida al usuario su edad (entero positivo).

Muestre el precio del boleto según las reglas.

Si la edad ingresada es inválida (ej. negativa), muestra: "Edad no válida".*/
#include <iostream>
#include <string>
using namespace std;
int main (){

int edad = 0;
cout << "Ingrese su edad numero positivo: ";
cin >> edad;
if (edad > 0) { 
  if (edad < 10 || edad > 60) {
    cout << "Debe pagar $5"<<endl;
} else if (18 <= edad && edad <= 60){
    cout << "Debe pagar $10"<<endl;

} else{
    cout << "Pague $17"<<endl;

}
} else{
    cout << "edad no valida";
}

    return 0;

}