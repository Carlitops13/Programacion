#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, siguiente;

    cout << "Introduce el número de términos de Fibonacci: ";
    cin >> n;

    cout << "Serie de Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";
        siguiente = t1 + t2;
        t1 = t2;
        t2 = siguiente;
    }

    cout << endl;
    return 0;
}
