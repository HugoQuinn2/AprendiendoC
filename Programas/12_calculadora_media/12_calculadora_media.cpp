#include <iostream>

using namespace std;

int main(){
	int lon = 3;
	float alumnos[lon];
	float sum = 0;
	
	for(int i = 0; i<=lon ; i++){
		cout<<"Alumno "<< i+1 <<": "; cin>> alumnos[i];
	}
	
	for(int i = 0; i<=lon; i++){
		sum+=alumnos[i];
	}
	
	cout<<"\nResultado: "<< sum/(lon+1);
	
	return 0;
}
