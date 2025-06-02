#include <iostream>

using namespace std;

int main() {
    const string PASSWORD_CORRECTO = "clave123";
    const int MAX_INTENTOS = 3;
    string passwordIngresado;
    int intentos = 0;
    bool passwordCorrecto = false;
    cout << "Bienvenido al sistema de autenticacion." << endl;
    cout << "Por favor, ingrese su password." << endl;
    while (intentos < MAX_INTENTOS && !passwordCorrecto) {
        cout << "Intento " << (intentos + 1) << ": ";
        cin >> passwordIngresado;

        if (passwordIngresado == PASSWORD_CORRECTO) {
            passwordCorrecto = true;
        } else {
            cout << "Password incorrecto. ";
            intentos++;
        }
    }

    if (passwordCorrecto) {
        cout << "Acceso concedido." << endl;
    } else {
        cout << "Acceso denegado. Se han agotado los intentos." << endl;
    }

    return 0;
}