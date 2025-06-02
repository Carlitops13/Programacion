#include <iostream>
#include <string>
using namespace std;

const int TAM = 5;

// Función para calcular el promedio
float calcularPromedio(int notas[]) {
    float suma = 0;
    for (int i = 0; i < TAM; i++) {
        suma += notas[i];
    }
    return suma / TAM;
}

// Función para encontrar el mayor
int encontrarMayor(int notas[]) {
    int mayor = notas[0];
    for (int i = 0; i < TAM; i++) {
        if (notas[i] > mayor) mayor = notas[i];
    }
    return mayor;
}

// Función para encontrar el menor
int encontrarMenor(int notas[]) {
    int menor = notas[0];
    for (int i = 0; i < TAM; i++) {
        if (notas[i] < menor) menor = notas[i];
    }
    return menor;
}

int main() {
    string nombres[TAM];
    int notas[TAM];

    cout << "=== Ingreso de datos ===\n";
    for (int i = 0; i < TAM; i++) {
        cout << "Nombre del estudiante #" << i + 1 << ": ";
        getline(cin, nombres[i]);
        cout << "Nota de " << nombres[i] << ": ";
        cin >> notas[i];
        cin.ignore();  // Limpiar el buffer
    }

    cout << "\n=== Resultados Individuales ===\n";
    for (int i = 0; i < TAM; i++) {
        cout << nombres[i] << " obtuvo " << notas[i] << "/10\n";
    }

    float promedio = calcularPromedio(notas);
    int mayor = encontrarMayor(notas);
    int menor = encontrarMenor(notas);

    cout << "\n=== Estadísticas Generales ===\n";
    cout << "Promedio del curso: " << promedio << endl;
    cout << "Nota más alta: " << mayor << endl;
    cout << "Nota más baja: " << menor << endl;

    cout << "\n=== Estudiantes con nota más alta ===\n";
    for (int i = 0; i < TAM; i++) {
        if (notas[i] == mayor) {
            cout << nombres[i] << " con " << notas[i] << endl;
        }
    }

    return 0;
}
