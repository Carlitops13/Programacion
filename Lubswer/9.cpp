#include <iostream>

using namespace std;

int edad = 0;
int main() {
    cout << "Ponga su edad en anos: ";
    cin >> edad;
    cout << "ha vivido: " << edad * 12 << "meses\n";
    cout << "ha vivido: " << edad * 52 << "semanas\n";
    cout << "ha vivido: " << edad * 365 << "dias\n";
    cout << "ha vivido: " << edad * 24 * 365 << "horas\n";

    return 0;
}