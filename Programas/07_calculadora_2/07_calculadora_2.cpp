#include <iostream>
using namespace std;

int main(){
	float a;
	float b;
	
	cout<<"CALCULADORA PARA: a/b + 1"<<endl;
	
	cout<< "a = ";
	cin>> a;
	
	cout<< "b = ";
	cin>> b;
	
	//Redondear el resultado de salida a 2 numeros
	cout.precision(2);
	cout<< "\nResultado: " <<(a/b)+1;
	return 0;
}
