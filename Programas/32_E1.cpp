#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

struct corredor{
	char nombre[25];
	int edad;
	char sexo;
	char club[25];
	char categoria[25];
}c1;

int main(){
		
	cout<<"Nombre: ";
	cin.getline(c1.nombre,20,'\n');
	
	cout<<"Club: ";
	cin.getline(c1.club,20,'\n');
	
	fflush(stdin);
	
	cout<<"Edad: ";
	cin>>c1.edad;
	
	cout<<"Sexo: ";
	cin>>c1.sexo;
	
	if(c1.edad <= 18){
		strcpy(c1.categoria, "Juvenil");
	}else if(c1.edad <= 40){
		strcpy(c1.categoria, "Senior");
	}else if(c1.edad > 40){
		strcpy(c1.categoria, "Veterano");
	}
	
	cout<< "\nNombre:\t"	<< c1.nombre;
	cout<< "\nEdad:\t"		<< c1.edad; 
	cout<< "\nSexo:\t"		<< c1.sexo; 
	cout<< "\nClub:\t"		<< c1.club; 
	cout<< "\nCategoria:\t"		<< c1.categoria; 
	
	return 0;
}
