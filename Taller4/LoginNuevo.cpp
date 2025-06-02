#include <iostream>
#include <string>
using namespace std;

int main() {
    
    const string CLAVE_TEST = "clave.test";
    const int MAX_INTENTOS_PERMITIDOS = 3;
   
    string claveIngresada;
    int intentosRealizados = 0;
    bool credencialesValidas = false;
    cout <<"Sistema de Logueo EPN"<<endl;
    cout<<"Aviso se registraran todos sus intentos"<<endl;
    while (credencialesValidas== false && intentosRealizados< MAX_INTENTOS_PERMITIDOS){
        intentosRealizados++;
        cout << "Intento de acceso Nro "<<intentosRealizados<<" de "<< MAX_INTENTOS_PERMITIDOS<<"----"<<endl;
      
        cout<<"Ingrese su clave: ";
        cin>>claveIngresada;
        
        
        if (claveIngresada == CLAVE_TEST) {
            credencialesValidas = true;
        }else {
        cout<<"Sistema EPN: Autenticacion Fallida"<<endl;
        switch (intentosRealizados){
            case  1: 
                if (intentosRealizados == 1)
                    cout << "Sistema EPN: VERIFIQUE SUS CREDENCIALES. LE QUEDA "
                    << MAX_INTENTOS_PERMITIDOS - intentosRealizados <<" intento(s)"<<endl;
                
                break;
            case 2:
                if (intentosRealizados == 2)
                    cout << "Sistema EPN: VERIFIQUE SUS CREDENCIALES" << endl;
                    cout << "Este es su ultimo intento permitido" << endl;
                break;
            case 3:
                if (intentosRealizados == 3)
                    cout << "Sistema EPN: Numero maximo de intentos fallidos alcanzado"<<endl;
                
                break;
            

        }
    }
} 
    if (credencialesValidas) {
     
        cout<<"Iniciando sesion...";
    }else {
        cout<<"Acceso denegado, su cuenta ha sido bloqueada temporalmente";
    }
return 0;
}
