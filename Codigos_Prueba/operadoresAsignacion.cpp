//
// Created by juanc on 20/5/2025.
//

#include <iostream>
using namespace  std;
int main() {
    int x = 10;
    cout<<"El valor de x es : "<<x<<endl;
    x += 5; // x = x + 5 -> 15
    cout<<"El valor de x es : "<<x<<endl;
    x -= 3; // x = x -3 -> 12
    cout<<"El valor de x es : "<<x<<endl;
    x *= 2; // x = x * 2 -> 24
    cout<<"El valor de x es : "<<x<<endl;
    x /= 2; // x = x / 2 -> 12
    cout<<"El valor de x es : "<<x<<endl;
    x %= 5; // x = x % 5 -> 2
    cout<<"El valor de x es : "<<x<<endl;
    return 0;
}