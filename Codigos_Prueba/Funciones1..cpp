#include <iostream>
#include <string>
using namespace std;

// Función que calcula el promedio de 3 notas
float calcularPromedio(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

// Función que determina si aprueba o no
string estadoFinal(float promedio) {
    if (promedio >= 7.0) {
        return "Aprobado";
    } else {
        return "Reprobado";
    }
}

int main() {
    const int NUM_ESTUDIANTES = 3;
    string nombres[NUM_ESTUDIANTES];
    float nota1, nota2, nota3;

    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Ingrese el nombre del estudiante #" << i + 1 << ": ";
        getline(cin, nombres[i]);// Leer el nombre del estudiante

        cout << "Ingrese las 3 notas de " << nombres[i] << ": ";
        cin >> nota1 >> nota2 >> nota3;
        cin.ignore(); // limpiar el buffer para getline

        float promedio = calcularPromedio(nota1, nota2, nota3);
        string estado = estadoFinal(promedio);

        cout << "📋 Resultado para " << nombres[i] << ": Promedio = " 
             << promedio << ", Estado = " << estado << "\n\n";
    }

    return 0;
}
