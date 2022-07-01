#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int opc;
    do
    {
        cout<<"<<<<<< Menu >>>>>>"<<endl;
        cout<<"1) Cubo de un numero"<<endl;
        cout<<"2) Numero par o impar"<<endl;
        cout<<"3) Salir"<<endl;
        cin>>opc;

        switch (opc)
        {
        case 1:

            float n;
            cout<<"Digita el numero a elevar: "<<endl;
            cin>>n;
            cout<<"Resultado ("<<n<<"^2"<<"): "<<pow(n,2)<<endl;

            break;
        case 2:

            int a;
            cout<<"Digita el numero a probar "<<endl;
            cin>>a;
            if ( a % 2 == 0)
            {
                cout<<"El numero es par"<<endl;
            }else{
                cout<<"El numero es impar"<<endl;
            }

            break;
        case 3:
            cout<<"ADIOS :)"<<endl;
            break;
        default:
        cout<<"Opcion no valida"<<endl;
            break;
        }

    } while (opc!=3);
    
    return 0;
}
