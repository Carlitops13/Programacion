/*  
3)	Realice un programa para ir eventualmente registrando las ventas del día de una tienda de informática, 
inicialmente este valor empieza en cero. El programa finalizará al presionar -1
*/
#include <iostream>

using namespace std;

int main() {
    double venta=0.0;
    double totalVentas=0.0;
    int dia=0;
    for (dia = 1; dia <= 30; dia++) {
        
    }
    cout << "Ingrese el valor de la venta  del dia " << dia << " (o -1 para finalizar): ";
    cin >> venta;
    do{ 
        if (venta != -1) {
            totalVentas += venta;
        }
        cout << "Ingrese el valor de la venta  del dia " << dia << " (o -1 para finalizar): ";
        cin >> venta;
    } while (venta != -1);

    cout << "Total de ventas del día: " << totalVentas << endl;
    return 0;
}