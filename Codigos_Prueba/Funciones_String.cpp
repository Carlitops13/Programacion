#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto = "Hola mundo";

    // Tamaño
    cout << "Tamaño: " << texto.length() << endl;

    // Ver si está vacío
    cout << "¿Está vacío? " << (texto.empty() ? "Sí" : "No") << endl;

    // Acceder a caracteres
    cout << "Primer carácter: " << texto.front() << endl;
    cout << "Último carácter: " << texto.back() << endl;
    cout << "Carácter en posición 1: " << texto.at(1) << endl;

    // Concatenación
    texto += "!";
    cout << "Concatenado: " << texto << endl;

    // Append
    texto.append(" Bienvenido.");
    cout << "Append: " << texto << endl;

    // Insertar
    texto.insert(5, "🌟 ");
    cout << "Insertar: " << texto << endl;

    // Substring
    string sub = texto.substr(5, 6);
    cout << "Subcadena desde 5 (6 letras): " << sub << endl;

    // Buscar
    size_t pos = texto.find("mundo");
    if (pos != string::npos)
        cout << "Encontrado 'mundo' en la posición: " << pos << endl;

    // Reemplazar
    texto.replace(0, 4, "Hola querido");
    cout << "Reemplazo: " << texto << endl;

    // Borrar
    texto.erase(5, 6);
    cout << "Borrado parcial: " << texto << endl;

    // Comparar
    string otro = "Hola";
    int cmp = texto.compare(otro);
    cout << "Comparación con 'Hola': " << cmp << endl;

    // c_str()
    cout << "c_str(): " << texto.c_str() << endl;

    // Limpiar string
    texto.clear();
    cout << "Después de clear: '" << texto << "'" << endl;

    return 0;
}
