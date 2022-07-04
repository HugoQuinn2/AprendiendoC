#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    char a[] = {'h','y','r','e','H'};
    int longa = sizeof(a)/sizeof(*a);
    int i;
    char dat;
    bool band = false;

    dat = 'H';
    //busqueda secuencuencial
    while (!band && (i < longa)){
        if (a[i] == dat){
            band = true;
        }
        i++;
    }
    
    if (!band){
        cout<< "No se encontro el dato espedificado";
    }else if(band){
        cout<< "Se contro el dato en la pisicion " << i-1 << " del array";
    }
    

    std::string dummy; cout << std::endl << std::endl;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);
    return 0;
}

