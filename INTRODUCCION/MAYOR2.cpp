#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using std::cout;
using std::cin;
using std::endl;


int MAX(int f, int g){
	
	int h;
	if(f>g){
		h=f;
	}
	else {
		h=g;
	}
	return h;
}


int main(){
	
	int a,b,c; 
	
	cout << "Introduzca el valor de a: " <<endl;
	cin >> a; 
	cout << "Introduzca el valor de b: " <<endl;
	cin >> b;
	cout << "Introduzca el valor de c: " <<endl;
	cin >> c;
	
	int max1 = MAX(a,b);
	int max2 = MAX(max1,c);
	
	cout << "El numero mayor es " <<max2 <<endl;
	
	return 0;
	
}
