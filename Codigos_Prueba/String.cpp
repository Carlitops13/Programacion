#include <iostream>
#include <string>
#include <algorithm> // para transform (minúsculas)
using namespace std;

// Función que muestra el estado actual con guiones y letras descubiertas
string mostrarEstado(string palabraSecreta, string letrasAdivinadas) {
    string estado = "";
    for (char c : palabraSecreta) {
        if (letrasAdivinadas.find(c) != string::npos) {
            estado += c;
        } else {
            estado += "_";
        }
    }
    return estado;
}

int main() {
    string palabraSecreta = "computadora";
    string letrasAdivinadas = "";
    int intentosMaximos = 6;
    int intentosFallidos = 0;

    cout << "🎮 Bienvenido al juego del Ahorcado 🎮\n\n";

    while (intentosFallidos < intentosMaximos) {
        string estadoActual = mostrarEstado(palabraSecreta, letrasAdivinadas);
        cout << "Palabra: " << estadoActual << endl;

        if (estadoActual == palabraSecreta) {
            cout << "🎉 ¡Felicidades! Adivinaste la palabra." << endl;
            break;
        }

        char intento;
        cout << "Ingresa una letra: ";
        cin >> intento;

        intento = tolower(intento); // por si ingresan mayúscula

        if (letrasAdivinadas.find(intento) != string::npos) {
            cout << "⚠️ Ya intentaste con esa letra. Intenta otra.\n\n";
            continue;
        }

        letrasAdivinadas += intento;

        if (palabraSecreta.find(intento) != string::npos) {
            cout << "✅ ¡Bien! La letra está en la palabra.\n\n";
        } else {
            intentosFallidos++;
            cout << "❌ Fallaste. Te quedan " << (intentosMaximos - intentosFallidos) << " intentos.\n\n";
        }
    }

    if (intentosFallidos == intentosMaximos) {
        cout << "💀 Has perdido. La palabra era: " << palabraSecreta << endl;
    }

    return 0;
}
