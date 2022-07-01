#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float saldo_inicial = 1000; // $ dlr
    int opc;
    do
    {
        cout<<"Cajero automatico ( "<< saldo_inicial <<" )"<<endl;
        cout<<"\t1) Retirar dinero"<<endl;
        cout<<"\t2) Ingresar dinero"<<endl;
        cout<<"\t3) Salir"<<endl;
        cin>>opc;

        switch (opc)
        {
        case 1:
            float retiro;
            cout<<"Dinero a retirar?"<<endl;
            cin>>retiro;

            if (retiro <= saldo_inicial)
            {
                saldo_inicial-=retiro;
            }else
            {
                cout<<"\tDinero insuficiente para el retiro"<<endl;
            }
            break;
        case 2:
            float ingreso;
            cout<<"Dinero a ingresar?"<<endl;
            cin>>ingreso;
            saldo_inicial+=ingreso;
        break;
        case 3:
            cout<<"ADIOS :)"<<endl;
        break;
        default:
        cout<<"\tOpcion no valida"<<endl;
            break;
        }
    } while (opc!=3);
    return 0;
}
