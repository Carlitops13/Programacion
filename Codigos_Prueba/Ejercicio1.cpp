#include  <iostream>
#include <string>
using namespace std;


int main () {
    double precioTrajeTipoC=0.0;
    double precioTrajeTipoB=0.0;
    double precioTrajeTipoA=0.0;
    double precioFinal=0.0;
    int opcion=0;
    const double DESCUENTO_A=0.15;
    const double DESCUENTO_B=0.10;
    cout<<"Ingrese el tipo de traje que desea comprar (1, 2 o 3)"<<endl;
    cout<<"1. Tipo A. Trajes importados(precios desde 150$)"<<endl;
    cout<<"2. Tipo B. Trajes locales"<<endl;
    cout<<"3. Tipo C. Trajes en promocion"<<endl;

    cin>>opcion;

    switch (opcion) {
        case 1:
            cout<<"Ingrese el precio del traje tipo A"<<endl;
            cin>> precioTrajeTipoA;
            if (precioTrajeTipoA>=150) {
                precioFinal= precioTrajeTipoA-(precioTrajeTipoA*DESCUENTO_A);
                cout<<"El precio de su traje es de: "<<precioFinal<<" con descuento de: "<<DESCUENTO_A*100<<"%"<<endl;

            }else{
                cout<<"Precio fuera del limite, lo sentimos"<<endl;
                return -1;
            }
            break;
        case 2:
            cout<<"Ingrese el precio del traje tipo B "<<endl;
            cin>>precioTrajeTipoB;
            if (precioTrajeTipoB<149 && precioTrajeTipoB>=100) {
                precioFinal= precioTrajeTipoB-(precioTrajeTipoB*DESCUENTO_B);
                cout<<"El precio de su traje es de: "<<precioFinal<<" con descuento de: "<<DESCUENTO_B*100<<"%"<<endl;
            }else {
                cout<<"Precio fuera del limite, lo sentimos"<<endl;
                return -1;
            }
            break;
        case 3:
            cout<<"Ingrese el precio del traje tipo C "<<endl;
            cin>>precioTrajeTipoC;
            if (precioTrajeTipoC<100 ) {
                precioFinal=precioTrajeTipoC-(precioTrajeTipoC*DESCUENTO_B);
                cout<<"El precio de su traje es de: "<<precioFinal<<" con descuento de: "<<DESCUENTO_B*100<<"%"<<endl;

            }else{
                cout<<"Precio fuera del limite, lo sentimos"<<endl;
                return -1;
            }

    }
return 0;
}