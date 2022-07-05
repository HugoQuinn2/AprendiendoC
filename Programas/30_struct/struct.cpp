#include <iostream>
using namespace std;

/* DECLARANDO UN STRUCT */
struct Persona{
    char nombre[20];
    int edad;
};

int main(int argc, char const *argv[])
{
    //agregando datos por delcaracion
    Persona p1 = {
        "Hugo",
        20
    },
    p2 = {
        "Quinn",
        18
    },p3;  

    //pidiendo los datos
    cout<< "Nombre: ";
    cin.getline(p3.nombre,20,'\n');

    cout<< "Edad: ";
    cin>> p3.edad;

    cout<< "\n|\t\tDATOS STRUCT\t|" << endl;
    cout<< "|\tNombre\t|\tEdad\t|" <<endl;
    cout<< "|\t" << p1.nombre << "\t|\t" << p1.edad << "\t|" <<endl;
    cout<< "|\t" << p2.nombre << "\t|\t" << p2.edad << "\t|" <<endl;
    cout<< "|\t" << p3.nombre << "\t|\t" << p3.edad << "\t|" <<endl;
    return 0;
}
