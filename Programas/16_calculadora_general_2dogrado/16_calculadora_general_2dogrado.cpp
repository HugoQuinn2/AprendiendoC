#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float b;
	float a;
	float c;
	
	cout<<"a = ";	cin>> a;
	cout<<"b = ";	cin>> b;
	cout<<"c = ";	cin>> c;
	
	cout<<"\nx = "<< ( -b + sqrt( pow(b,2) - (4*a*c) ))/(2*a) <<" , "<<( -b - sqrt( pow(b,2) - (4*a*c) ))/(2*a);
		
	return 0;
}
