#include <iostream>
using namespace std;

/* DECLARANDO UN STRUCT */
struct direccion{
    char dir[30];
    char ciudad[20];
    char provincia[20];
};

/* DECLARANDO UN STRUCT ANIDADO*/
struct empleado
{
    char nombre[20];
    struct direccion dir_empleado;
    double salario;
}empleados[5];


int main(int argc, char const *argv[])
{
    
    //pidiendo los datos de 5 empleados
    for (int i = 0; i < 5; i++)
    {
        
        cout<< "Nombre: ";
        cin.getline(empleados[i].nombre,20,'\n'); 

        cout<< "Ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');

        cout<< "Provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia,20,'\n');

        cout<< "Direccion: ";
        cin.getline(empleados[i].dir_empleado.dir,30,'\n');

        cout<< "Salario: ";
        cin>> empleados[i].salario;

        cout<< "\n";

        //Demaciadas cadenas de caracterres solicitadas llenan el buffer
        fflush(stdin); //Vacia el buffer
    }
    
    

    cout<< "\n|\t\tDATOS STRUCT\t|" << endl;
    cout<< "|\tNombre\t|\tSalario\t|\tDireccion\t|\tCiudad\t|\tProvincia\t|" <<endl;
    for (int i = 0; i < 5; i++)
    {
         cout<< "|\t" << empleados[i].nombre << 
         "\t|\t" << empleados[i].salario << 
         "\t|\t" << empleados[i].dir_empleado.dir <<
         "\t|\t" << empleados[i].dir_empleado.ciudad <<
         "\t|\t" << empleados[i].dir_empleado.provincia << endl;
    }
   
    return 0;
}
