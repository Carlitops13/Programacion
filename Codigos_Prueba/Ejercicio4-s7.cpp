/*
4)	Escribe una función que cuente cuántas palabras contiene una cadena.
 Considera que las palabras están separadas por espacios.
  
*/
#include <iostream>
#include <string>
using namespace std;

int contarPalabras(const string& cadena) {
    int contador = 0;
    bool enPalabra = false;

    for (char c : cadena) {
        if (c != ' ' && !enPalabra) {// Si encontramos un carácter que no es espacio y no estamos en una palabra
            // Comienza una nueva palabra
            enPalabra = true;
            contador++;
        } else if (c == ' ') {
            // Salimos de la palabra
            enPalabra = false;
        }
    }

    return contador;
}
int main() {
    string texto;
    cout << "Ingrese una frase: ";
    getline(cin, texto); // Permite ingresar una línea completa, incluyendo espacios

    int totalPalabras = contarPalabras(texto);
    cout << "La frase contiene " << totalPalabras << " palabras." << endl;

    return 0;
}