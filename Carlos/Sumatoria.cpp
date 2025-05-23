#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numero=0;
    int sumatoriaCubica=0;
    cout<<"Ingrese el numero a sumar: ";
    cin>>numero;
    sumatoriaCubica=pow((numero * (numero + 1)) / 2, 2);
    cout<<"La sumatoria de cubos de: "<<numero<<", es = "<<sumatoriaCubica<<endl;

    return 0;
}
