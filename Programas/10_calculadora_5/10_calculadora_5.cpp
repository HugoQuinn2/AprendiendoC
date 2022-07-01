#include <iostream>
#include <map> //libreria para crear arrays asociativos
using namespace std;

int main(){
	map<char,float>v; //array asociativo
	cout<<"CALCULADORA PARA a + b/(c-d)"<<endl;
	
	cout<<"a = "; cin>>v['a'];
	cout<<"b = "; cin>>v['b'];
	cout<<"c = "; cin>>v['c'];
	cout<<"d = "; cin>>v['d'];

	float num = v['b'];
	float den = v['c'] - v['d'];
	
	cout<<"\nResultado: "<< v['a'] + ( num/den );
	
	return 0;
}
