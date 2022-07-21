#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct atleta
{
    char nombre[25];
    char pais[25];
    int n_medallas;
}atletas[];


void setDatos(atleta st[]){
	
	string nombres[4] = {"Hugo","Fer","Diego","Adrian"};
    string paises[4] = {"Mexico","EU","Egipto","Irlanda"};

	srand(time(NULL));
	
	for(int i = 0; i < 4 ; i++){
		
		//Ingresar la lista de nombres, convertir string to char
		strcpy( st[i].nombre, nombres[i].c_str() );
        strcpy( st[i].pais, paises[i].c_str() );
		
		//dar un salario aleatorio a los empleados 0 - 5
		st[i].n_medallas = rand()%5;
	}
}

int main(int argc, char const *argv[])
{
    setDatos(atletas); // añadir los datos de forma aleatoria
    int max = 0;
	
		for(int i = 0; i < 4; i++){
			cout<< atletas[i].nombre << "\t" 
            << atletas[i].pais << "\t" 
            << atletas[i].n_medallas << endl;

			//atleta con mayor numero de medallas
			if(atletas[max].n_medallas > atletas[i].n_medallas){
				max = i; //Ubicacion del empleado con mayor salario
			}
		}

    cout << "Atleta con maor numero de medallas\n"
         << atletas[max].nombre << endl;

    return 0;
}
