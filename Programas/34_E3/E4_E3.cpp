#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

struct empleado{
	char nombre[25];
	float salario;
}empleados[4];

void setDatos(empleado emp[]){
	
	string nombres[4] = {"Hugo","Fer","Diego","Adrian"};
	float salario[4];
	srand(time(NULL));
	
	for(int i = 0; i < 4 ; i++){
		
		//Ingresar la lista de nombres, convertir string to char
		strcpy( emp[i].nombre, nombres[i].c_str() );
		
		//dar un salario aleatorio a los empleados 0 - 5000
		emp[i].salario = rand()%5000;
	}
}

int main(){
	
	int opc = 0;
	
	do{
		
		setDatos(empleados); //Añadir los datos de prueba
		int min = 0, max = 0;
	
		for(int i = 0; i < 4; i++){
			cout<< empleados[i].nombre << "\t" << empleados[i].salario << endl;
			
			//Empleado con menor salario
			if( empleados[min].salario > empleados[i].salario){
				min = i;//Ubicacion del empleado con menor salario
			}
			
			//empleado con mayor salario
			if(empleados[max].salario < empleados[i].salario){
				max = i; //Ubicacion del empleado con mayor salario
			}
		}
	
		cout<< "\nEmpledo menor y mayor pagado:\n";
		cout<< empleados[min].nombre << "\t" << empleados[min].salario << endl;
		cout<< empleados[max].nombre << "\t" << empleados[max].salario << endl;
		
		cin>>opc;
	}while(opc == 0);
	
	return 0;
}
