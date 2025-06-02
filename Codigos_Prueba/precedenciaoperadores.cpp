//
// Created by juanc on 20/5/2025.
//

#include <iostream>
using namespace  std;
int main() {
    int a = 5, b = 3, c = 2;
    bool resultado = a * b + c > 10 && !(a % b == 0);
    //Orden Evaluacion de expresiones
    // (a % b) = 2
    // 2 == 0 -> false (0)
    // a*b = 15
    // (a*b) + c = 17
    // (a *b +c > 10) = True (1)
    // !(a%b == 0) == True (1)
    // True && True
    cout << boolalpha<< resultado << endl;
    return 0;
}