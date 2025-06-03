/**
 1)	Crear una función que reciba Nombre del Cliente, RUC y fecha, 
 esta función debe devolver el encabezado de una factura.
  Crea una función que reciba los detalles de los productos con su respectivo importe 
  y luego devuelva los detalles, con subtotal, IVA y total a pagar. Finalmente combinar 
  las dos funciones y mostrar la factura en la consola.
 */

#include <iostream>
#include <string>
using namespace std;

void generarEncabezado(string nombreCliente, string ruc, string fecha) {
    cout << "==========================" << endl;
    cout << "Factura" << endl;
    cout << "Cliente: " << nombreCliente << endl;
    cout << "RUC: " << ruc << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "==========================" << endl;
}


void generarDetalleProducto(string nombreProducto, float precio, int cantidad) {
    float subtotal = precio * cantidad;
    float iva = subtotal * 0.15;  
    float total = subtotal + iva;

    cout << "Producto: " << nombreProducto << endl;
    cout << "Precio: S/. " << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Subtotal: S/. " << subtotal << endl;
    cout << "IVA: S/. " << iva << endl;
    cout << "Total: S/. " << total << endl;
    cout << "==========================" << endl;
}

int main() {
    // Datos de la factura
    string nombreCliente = "Juan Pérez";
    string ruc = "12345678901";
    string fecha = "01/01/2023";

    // Generar encabezado
    generarEncabezado(nombreCliente, ruc, fecha);

    // Generar detalles de productos
    generarDetalleProducto("Laptop", 3000.00, 1);
    generarDetalleProducto("Mouse", 50.00, 2);

    return 0;
}