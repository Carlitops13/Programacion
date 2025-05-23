#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x1=0.0;
    double y1=0.0;
    double x2=0.0;
    double y2=0.0;
    double distancia=0.0;
    cout <<"Ingrese la coordenada x1 y la coordenada x2: ";
    cin>>x1>>x2;
    cout<< "Ingrese la coordenada y1 y la coordenada y2; ";
    cin>>y1>>y2;
    cout << "Tus puntos son: " << "("<<  x1 << "," <<  y1 << ")" << ";" << "("<<  x2 << ","<< y2 << ")\n";
    distancia= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<"La distancia entre los puntos es: " << fixed << setprecision(2)<<distancia<<endl;

    return 0;
}

