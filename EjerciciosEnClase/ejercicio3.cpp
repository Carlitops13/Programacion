#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main(){
	
	double interesMensual = 0.035;
	double precioArticulo = 0.0;
	double interesTotal = 0.0;
	double montoTotal = 0.0;
	
	cout << "Ingrese el valor del producto: ";
	cin >> precioArticulo;
	
	interesTotal = (precioArticulo * interesMensual) * 6;
	montoTotal = precioArticulo + interesTotal;

	
	cout << fixed << setprecision(0);

	cout << "El interes que le cobraremos en un plazo de 6 meses es: " << interesTotal << "\n";
	cout << "El monto total a pagar es: " << montoTotal << "\n";

	return 0;
}