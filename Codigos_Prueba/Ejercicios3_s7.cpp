/*
3)	Luego de una pericia informática, se han extraído los chats de whatsapp de tu expareja, mismos que vienen en un arreglo con el siguiente formato: 
string chat[] = {
    "08:15//Roberto//Hola perdida, ¿como estas?",
    "08:17//Belen//Bien, gracias. ¿Y tu?",
    "08:20//Roberto//Aqui pensandote. ¿Quieres salir al cine hoy?",
        "08:21//Belen//Tu novia, ¿si te da permiso?",
"08:22//Roberto//Cual novia?. Es una amiga nomas",
"08:23//Roberto//mejor tu pide permiso a tu novio?"};
Debes extraer las partes de cada mensaje (hora, usuario, mensaje) y presentarlo en 3 arreglos diferentes , adicional mostrar un reporte de  cuántos mensajes ha enviado Roberto y Belen en total. Necesitaras usar find() y substr().

*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string chat[] = {
        "08:15//Roberto// Hola perdida, como estas?",
        "08:17//Belen// Bien, gracias. Y tu?",
        "08:20//Roberto// Aqui pensandote. Quieres salir al cine hoy?",
        "08:21//Belen// Tu novia, si te da permiso?",
        "08:22//Roberto// Cual novia?. Es una amiga nomas",
        "08:23//Roberto// mejor tu pide permiso a tu novio?"
    };

    string horas[6];
    string usuarios[6];
    string mensajes[6];
    int contadorRoberto = 0;
    int contadorBelen = 0;

    for (int i = 0; i < 6; i++) {
        size_t pos1 = chat[i].find("//");
        size_t pos2 = chat[i].find("//", pos1 + 2);

        horas[i] = chat[i].substr(0, pos1);// Extraer la hora
        usuarios[i] = chat[i].substr(pos1 + 2, pos2 - pos1 - 2);// Extraer el usuario
        // Extraer el mensaje, que es todo lo que sigue después del segundo "//"
        mensajes[i] = chat[i].substr(pos2 + 2);     

        if (usuarios[i] == "Roberto") { // Contar mensajes de Roberto
            contadorRoberto++;
        } else if (usuarios[i] == "Belen") {// Contar mensajes de Belen
            contadorBelen++;
        }
    }

    // Mostrar los resultados
    cout << "Horas de los mensajes:" << endl;
    for (int i = 0; i < 6; i++) {// Recorrer el arreglo de horas
        cout << horas[i] << endl;
    }

    cout << "\nUsuarios de los mensajes:" << endl;// Recorrer el arreglo de usuarios
    for (int i = 0; i < 6; i++) {// Mostrar los usuarios
        cout << usuarios[i] << endl;
    }

    cout << "\nMensajes:" << endl;
    for (int i = 0; i < 6; i++) {// Recorrer el arreglo de mensajes
        cout << mensajes[i] << endl;
    }

    cout << "\nReporte de mensajes enviados:" << endl;
    cout << "Roberto: " << contadorRoberto << " mensajes" << endl;
    cout << "Belen: " << contadorBelen << " mensajes" << endl;

    return 0;
}