#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

struct alumno{
	char nombre[25];
	int edad;
	float promedio;
}alumnos[3];

int main(){
	
	int cal = 0;
		
	for(int i = 0; i<=3 ; i++){
		
		cout<<"Nombre: ";
		cin.getline(alumnos[i].nombre,20,'\n');
		
		fflush(stdin);
		
		cout<<"Edad: ";
		cin>>alumnos[i].edad;
		
		cout<< "Promedio: ";
		cin>> alumnos[i].promedio;
		
		if(alumnos[i].promedio > alumnos[ i - 1 ].promedio){
			cal = i;
		}
		
		//Limpiar el buffer
		fflush(stdin);
		cout<<endl;
	}	
	
	for(int i = 0; i <= 3 ; i++){
	cout<< alumnos[i].nombre << endl;
	cout<< "\tEdad:"		<< alumnos[i].edad << endl; 
	cout<< "\tPromedio:"	<<alumnos[i].promedio << endl; 
	}
	
	cout<< "\nAlumno con mayor promedio: " << alumnos[cal].nombre << " | " << alumnos[cal].promedio;
	
	return 0;
}
