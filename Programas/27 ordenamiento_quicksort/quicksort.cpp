#include <iostream>
#include <stdio.h>

using namespace std;

void exchange(float &x, float &y){
    float aux = x;
    x = y;
    y = aux;
}
void quicksort(float a[],int primero,int ultimo){
    
    /*int longa = sizeof(a)/sizeof(*a);
    float pivot = a[ (longa-1)/2 ];*/

    int i = primero;
    int j = ultimo;
    float pivot = a[ (primero + ultimo) / 2 ];

    do{
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;
        
        if (i <= j){
            exchange(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j);

    // ordenamiento de la sublista izq
    if (primero < j){
       quicksort(a,primero,j); 
    }

    // ordenamiento de la sublista derecha
    if (i < ultimo){
        quicksort(a,i,ultimo); 
    }
}

int main(int argc, char const *argv[])
{
    float num[] = {5,3,4,1,1,2,8,7,6};
    int longn = sizeof(num)/sizeof(*num);

    quicksort(num, 0, longn - 2);

    cout<<"Acendente: ";
    for (int i = 0; i < longn; i++){
        cout<<num[i];
    }

    cout<<"\nDesendente: ";
    for (int i = longn - 1; i >= 0; i--){
        cout<<num[i];
    }

    std::string dummy; cout << std::endl << std::endl;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);
    return 0;
}
