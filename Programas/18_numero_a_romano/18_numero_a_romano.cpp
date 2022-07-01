
/*
	M = 1000
	D = 500
	C = 100
	L = 50
	X = 10
	V = 5
	I = 1
	
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n;
	bool res = false;
	string rom,m,d,c,l,x,v,i;
	 
	cout<<"Digita un numero: "; cin>> n;
	
	do{
		
		if(n >= 1000){
			
			m +="M";
			n -= 1000;
		
		}else if(n >= 500){
			
			d +="D";
			n -= 500;
		
		}else if(n >= 100){
			
			c +="C";
			n -= 100;
			if(c.length() == 4){
				c = "CD";
			}
			
		}else if(n >= 50){
			
			l +="L";
			n -= 50;
		
		}else if(n >= 10){
			
			x +="X";
			n -= 10;
		
		}else if(n >= 5){
			
			v +="V";
			n -= 5;
		
		}else if(n >= 1){
			
			i +="I";
			n -= 1;
			if(i.length() == 4){
				i = "IV";
			}
		
		}else if( n == 0 ){
			
			rom = m + d + c + l + x + v + i;
			res = true;
			
		}
		
	}while(!res);
	
	
	
	cout<<"Romanos: "<< rom;
	
	return 0;
}
