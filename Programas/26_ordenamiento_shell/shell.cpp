#include <iostream>

using namespace std;

void exchange(float &x, float &y){
    float aux = x;
    x = y;
    y = aux;
}
void shell(float a[], int longa){
    int j,k;
    int step = longa/2;

    while (step > 0){
        for (int i = step; i < longa; i++){
            j = i - step;
            while ( j >= 0){
                k = j + step;
                if (a[j] <= a[k]){
                    j = -1;
                }else{
                    exchange(a[j], a[k]);
                    j -= step;
                }
            }
        }
        step = step / 2;
    }
}

int main(int argc, char const *argv[])
{
    float num[] = {5,3,4,1,2,8,7,6};
    int longn = sizeof(num)/sizeof(*num);

    shell(num,longn);

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
