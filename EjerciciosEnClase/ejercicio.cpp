#include <iostream>
#include <string>

using namespace std;

int main(){
int cantidadVendida=500;
double precioUnitario=25.50;
double costoVariableUnitario=10.20;
double costosFijosTotales=1500.00;

double ingresosTotales= cantidadVendida*precioUnitario;
double costosVariablesTotales= cantidadVendida*costoVariableUnitario;
double costosTotales= costosVariablesTotales + costosFijosTotales;
double beneficioNeto= ingresosTotales-costosTotales;
double margenBeneficioNeto= beneficioNeto/ingresosTotales;
cout<< "Los Ingresos totales son: "<<ingresosTotales<<"\n";
cout<< "Los costos variables totales son de: "<<costosVariablesTotales<<"\n";
cout<< "Los costos totales son:  "<<costosTotales<<"\n";
cout<< "El beneficio neto es:  "<<beneficioNeto<<endl;
cout<< "El margen de beneficio neto es: "<<margenBeneficioNeto<<endl;

int num1=4;
int num2 = 8;

double resultado = double(num1)/num2;
cout<< "El resultado es:  "<< resultado;


return 0;
} 