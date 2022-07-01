#include <iostream>
using namespace std;

int main(){
	float iva = 0.16;
	float precio;
	
	cout<< "Precio del producto: ";
	cin>> precio;
	
	cout<< "Tolat + iva: "<< precio + (precio*iva);
	return 0;
}
