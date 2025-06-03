/*
Escriba una función que reciba una expresión matemática y separe sus componentes, por ejemplo al ingresar 
(2*3)-5=1 el resultado será :
Números: 2, 3, 5
Operadores: *, -
Otros: ( , )

*/

#include <iostream>
#include <string>

using namespace std;

void separarComponentes(const string& expresion) {// Función para separar los componentes de una expresión matemática
    string numeros;
    string operadores;
    string otros;

    for (char c : expresion) {
        if (c >= '0' && c <= '9') {  // Verifica si el carácter es un número
            numeros += c;
        } else if (c == '(' || c == ')' || c == '=' || c == ',') {
            otros += c;
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            operadores += c;
        } else {
            otros += c;
        }
    }

    // Mostrar resultados
    cout << "Números: " << numeros << endl;
    cout << "Operadores: " << operadores << endl;
    cout << "Otros: " << otros << endl;
}

int main() {
    string expresion;
    cout << "Ingrese una expresión matemática: ";
    getline(cin, expresion);

    separarComponentes(expresion);

    return 0;
}
