#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num[] = {5,3,4,1,2,8,7,6};
    int longn = sizeof(num)/sizeof(*num);
    int aux,min;


    //Algoritmo por seleccion
    for (int i = 0; i < longn; i++){
        min = i;
        for (int j = i + 1; j < longn; j++){
            if (num[j] < num[min]){
                min = j;
            }
        }
        aux = num[i];
        num[i] = num[min];
        num[min] = aux;
    }
    

    //Imprecion del array
    cout<<"Acendente: ";
    for (int i = 0; i < longn; i++){
        cout<<num[i];
    }

    cout<<"\nDesendente: ";
    for (int i = longn-1; i >= 0; i--){
        cout<<num[i];
    }
    
    std::string dummy; cout << std::endl << std::endl;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);
    return 0;
}
