#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int num[] = {1,2,3,4,5,6,7,8,9,10};
    int longa = sizeof(num)/sizeof(*num);
    int inf,sup,mitad,dato;
    bool band = false;
    int i = 0;

    dato = 11;

    //algoritmo de la busqueda binaria
    inf = 0;
    sup = longa;

    while (inf <= sup){
        mitad = (inf + sup)/2;
        if (num[mitad] == dato){
            band = true;
            break;
        }
        
        if (num[mitad] > dato){
            sup = mitad;
            mitad = (inf + sup)/2;
        }
        if(num[mitad] < dato){
            inf = mitad;
            mitad = (inf + sup)/2;
        }

        //Evitar un bucle infinito
        i++;if (i > longa){break;}
    }

    if (band)
    {
        cout<< "El numero se encontro en la posicion " << mitad;
    }else{
        cout<< "No se encontro el numero";
    }
    
    

    std::string dummy; cout << std::endl << std::endl;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);
    return 0;
}
