#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	float x;
	float y;
	
	cout<<"x = ";	cin>> x;
	cout<<"y = ";	cin>> y;
	
	
	cout<<"\nf(x, y) = "<< sqrt(x)/( pow(y,2) - 1 );
		
	return 0;
}
