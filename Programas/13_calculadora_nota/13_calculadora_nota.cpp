#include <iostream>
using namespace std;

int main(){
	
	float prac;
	float teo;
	float part;
	
	cout<<"digita la nota de practica: ";		cin>> prac;
	cout<<"digita la nota de teorica: ";		cin>> teo;
	cout<<"digita la nota de participacion: ";	cin>> part;
	
	prac*= 0.3;
	teo*= 0.6;
	part*= 0.1;
	
	
	cout<<"\nNota final: "<< prac+teo+part;
		
	return 0;
}
