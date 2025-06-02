#include <iostream>
#include <string>
using namespace std;

int totalHoras =0;
int totalHorasSupletorio = 0;
int totalHorasNoSupletorio = 0;
string sesionesEstudio[10] = {
        "est001:REDE01:3",    "est002:PROG01:2",    "est003:FISI01:2",   "est001:PROG01:4","est004:ARQU01:6","est002:SISO01:2",
        "est005:HIST01:3", "est003:PROG01:3", "est001:FISI01:4", "est004:REDE01:5" }; // Ejemplo de sesiones de estudio 

string materiasSupletorios[3] = {"REDE01", "PROG01", "FISI01"};// Ejemplo de materias con alta tasa de supletorio

bool esMateriaSupletorio(string materia){// Función para verificar si una materia es de alta tasa de supletorio
    // Recorre el arreglo de materias supletorios
    for(string mate : materiasSupletorios){// Utiliza un bucle for-each para recorrer el arreglo 
        // Compara la materia actual con la materia pasada como argumento
        if(materia == mate){ // Si la materia coincide con alguna del arreglo
            // Retorna true si la materia es de alta tasa de supletorio
            return true;// Retorna true si la materia es de alta tasa de supletorio
        }
    }
    return false;// Retorna false si la materia no es de alta tasa de supletorio
}
int main() {

    for(int i = 0; i<10; i++){// Recorre el arreglo de sesiones de estudio
        int pos1 = sesionesEstudio[i].find(':'); //Busca la posicion del primer :
        int pos2 = sesionesEstudio[i].find(':', pos1+1);// Busca la posicion del segundo :
        // Extrae la materia y las horas de estudio de la cadena
        string materia = sesionesEstudio[i].substr(pos1+1,pos2-pos1-1);
        // Extrae las horas de estudio de la cadena
        int horas = stoi(sesionesEstudio[i].substr(pos2+1));// Convierte la cadena de horas a un entero
        totalHoras += horas;// Suma las horas de estudio al total

        if(esMateriaSupletorio(materia)){// Verifica si la materia es de alta tasa de supletorio
            // Si es de alta tasa de supletorio, suma las horas al total de horas de supletorio
            totalHorasSupletorio += horas;// Suma las horas de estudio de materias de alta tasa de supletorio
        }else{
            totalHorasNoSupletorio += horas;   // Si no es de alta tasa de supletorio, suma las horas al total de horas de no supletorio
        }
    }

    cout<<"Total de horas de estudio "<<totalHoras<<endl;
    cout<<"Total de horas de estudio en materias de alta tasa de supletorio: "<<totalHorasSupletorio<<endl;
    cout<<"Total de horas de estudio en materias de baja tasa de supletorio: "<<totalHorasNoSupletorio<<endl;

    return 0;
}