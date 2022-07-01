#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int num[] = {5,3,4,1,2};
    int pos, aux;
    int longn = sizeof(num)/sizeof(*num);

    //algoritmo por inserccion
    for (int i = 0; i < longn; i++){
        pos = i;
        aux = num[i];
        while ( (pos > 0 ) && (num[pos-1] > aux) )
        {
            num[pos] = num[pos-1];
            pos--;
        }
        num[pos] = aux;
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
    

    getch();
    return 0;
}
