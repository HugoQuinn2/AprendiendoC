#include <iostream>
#include <math.h>
using namespace std;

int main(){
	char car;
	int carn;
	
	cout<<"Digita un caracter: "; cin>> car;
	carn = (int)car;
	
	if( carn >= 97 && carn <= 122){
		cout<<"\nEs minuscula"<<endl;
	}else if( carn >= 65 && carn <= 90){
		cout<<"\nEs mayuscula"<<endl;
		carn += 32;
	}else{
		cout<<"\nNo es una letra";
	}
	
	if(carn == 97 || carn == 101 || carn == 105 || carn == 111 || carn == 117){
			cout<<"Es una vocal";
		}
	
	return 0;
}
