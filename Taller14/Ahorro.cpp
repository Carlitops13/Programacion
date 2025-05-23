/*
2.	Se requiere un programa para determinar cuánto ahorrará una persona en un año, 
si al final de cada mes deposita variables cantidades de dinero; además, se requiere 
saber cuánto lleva ahorrado cada mes. 
*/ 

#include <iostream>

using namespace std;

int main() {

    
    double ahorros =0;
    int mes=0;
    double cantidad=0;
    double totalahorros=0;
    cout << "---------------------------------"<<endl;
    cout << "CALCULADORA DE AHORROS ANUAL"<<endl;
    cout << "---------------------------------"<<endl;
    while (mes<12){
        mes=mes+1;
        cout<<"Ingrese la cantidad de ahorros en el mes: "<<mes<<endl;
        cin>>cantidad;
        cout<<"Deposito de: "<<cantidad<<endl;
        ahorros=ahorros+cantidad;
        cout<<"Ahorro acumulado:"<<ahorros<<endl;
        totalahorros=totalahorros+ahorros;

        cout<<"---------------------------------"<<endl;

    
    }
    cout<<"---------------------------------"<<endl;
    cout<<"Total ahorrado en el anio: "<<totalahorros<<endl;
    cout<<"---------------------------------"<<endl;


    return 0;
}