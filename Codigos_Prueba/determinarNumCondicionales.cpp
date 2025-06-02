
#include <iostream>;
using namespace  std;

int main() {
    int num = 0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    if ( num > 0) {
        cout<<"El numero es positivo"<<endl;
    }else if ( num < 0){
        cout<<"El numero es negativo"<<endl;
    }else {
        cout<<"El numero ingresado es cero";
    }


}