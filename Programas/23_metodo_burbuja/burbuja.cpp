#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[] = {4,1,2,3,5};
    
    int longn = sizeof(numeros)/sizeof(*numeros);
    //int longn = 6;
    int aux;

    for(int i = 0; i < longn; i++){
        cout<<numeros[i];
    }
    
    //Algoritmo del metodo burbuja ascendente
    for (int i = 0; i < longn; i++){
    	
        for (int j = 0; j < (longn-1); j++){
        	
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    
    
	cout<<"\n";
    for(int i = 0; i < longn; i++){
        cout<<numeros[i];
    }
    
    
    std::string dummy; cout << std::endl << std::endl;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);
    return 0;
}
