#include <iostream>
using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Introduce la edad: ";
	cin>> edad;
	
	cout<<"Introduce sexo: ";
	cin>> sexo;
	
	cout<<"Introduce la altura: ";
	cin>> altura;
	
	cout<<"\nDATOS REGISTRADOS"<<endl;
	cout<<"\t" << edad << endl;
	cout<<"\t" << sexo << endl ;
	cout<<"\t" << altura;
	return 0;
}
