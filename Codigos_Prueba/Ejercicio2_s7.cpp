/*  
2)	Genere un programa en c++ con arreglos simples, 
que contenga un arreglo con diez de sus comidas favoritas, 
recorra el arreglo y pare cuando encuentre a su comida favorita 
por sobre las otras diez.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Arreglo con 10 comidas favoritas
    string comidas[10] = {
        "Pizza", "Sushi", "Tacos", "Hamburguesa", "Encebollado",
        "Pasta", "Pollo al horno", "Sopa", "Ceviche", "Lasaña"
    };

    string miComidaFavorita;

    // Pedir al usuario su comida favorita
    cout << "Ingrese su comida favorita: ";
    getline(cin, miComidaFavorita); // Captura toda la línea (incluye espacios)

    // Recorrer el arreglo y detenerse al encontrar la comida

    for (int i = 0; i < 10; i++) {
        cout << "Comida favorita ingresada " << comidas[i] << endl;

        if (comidas[i] == miComidaFavorita) {
            cout << "¡Encontré tu comida favorita: " << miComidaFavorita << "!" << endl;

            break;
        }else {
            cout << "No es tu comida favorita: " << comidas[i] << endl;
        }
    }


}