#include <iostream>
#include <string>
using namespace std;
/*  Un sistema de transporte cobra así:

$5 si el pasajero es menor de 10 años o mayor de 60.

$10 si tiene entre 18 y 60 años (incluidos).

$7 en cualquier otro caso (adolescentes).

Escribe un programa que:

Pida al usuario su edad (entero positivo).

Muestre el precio del boleto según las reglas.

Si la edad ingresada es inválida (ej. negativa), muestra: "Edad no válida".*/
int main() {
    int edad=0;
   cout <<"Ingrese su edad: ";
   cin>> edad;
   if (edad<0){
    cout <<"Edad no valida";
   }else if (edad<10 || edad>60){
    cout << "El precio del boleto es de $5";
   }else if (edad>=18 && edad<=60){
    cout << "El precio del boleto es de 10$";
   }else{
    cout <<"El precio del boleto es de $7";
   }
   return 0;
   }

   