#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float ca;
	float co;
	
	cout<<"Cateto adyacente: ";	cin>> ca;
	cout<<"Cateto opuesto: ";	cin>> co;
	
	
	cout<<"\nHipotenisa: "<< sqrt( pow(ca,2) + pow(co,2) );
		
	return 0;
}
