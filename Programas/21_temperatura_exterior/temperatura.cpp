#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float temperatura[5];
    float mayor = 0;
    float menor = 99999;
    float t = 0;

    for (int i = 0; i <= 6; i++)
    {
        cout<<"Digita la temperatura de la hora ("<<i*4<<"): ";
        cin>>temperatura[i];
        t+=temperatura[i];

        if (temperatura[i] > mayor)
        {
            mayor = temperatura[i];
        }
        if (temperatura[i] < menor)
        {
            menor = temperatura[i];
        }
    }
    cout<<"\n----- Datos finales ------ "<<endl;
    cout<<"\nTemperatura promedio: "<< t/6 <<endl;
    cout<<"Temperatura mas alta: "<< mayor <<endl;
    cout<<"Temperatura mas baja: "<< menor <<endl;

    std::string dummy; cout << std::endl << std::endl;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);
    return 0;
}
