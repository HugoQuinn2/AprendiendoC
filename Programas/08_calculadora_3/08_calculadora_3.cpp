#include <iostream>
using namespace std;

int main(){
	float a;
	float b;
	float c;
	float d;
	
	cout<<"CALCULADORA PARA: (a+b)/(c+d)"<<endl;
	
	cout<< "a = "; cin>> a;
	cout<< "b = "; cin>> b;
	cout<< "c = "; cin>> c;
	cout<< "d = "; cin>> d;
	
	//Redondear el resultado de salida a 2 numeros
	cout.precision(5);
	cout<< "\nResultado: " <<(a+b)/(c+d);
	return 0;
}
