#include <iostream>
using namespace std;

void enter_to_continue(){
    std::string dummy; cout << std::endl << std::endl;
    std::cout << "Enter to continue..." << std::endl;
    std::getline(std::cin, dummy);
}