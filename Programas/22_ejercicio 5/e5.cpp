#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n[1];
    int e;
    int s;
        
    n[0] = 0;
    n[1] = 1;

    cout<<"Digita el numero de elementos: "; cin>> e;
    cout<< "0 1";

    for (int i = 0; i <= e; i++){
        s = n[0] + n[1];
        cout<< " " << s;
        
        n[0] = n[1];
        n[1] = s;
    }
    
    std::string dummy; cout << std::endl << std::endl;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);
    return 0;
}
