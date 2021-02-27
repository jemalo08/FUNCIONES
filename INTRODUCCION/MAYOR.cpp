#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using std::cout;
using std::cin;
using std::endl;


void MAX(int f, int g){
	
	if(f>g){
		cout << "El numero mayor es " <<f <<endl;
	}
	else if(f<g){
		cout << "El numero mayor es " <<g <<endl;
	}
	else
	cout << "ERROR 404 XD" << endl;
}


int main(){
	
	int a,b; 
	
	cout << "Introduzca el valor de a: " <<endl;
	cin >> a; 
	cout << "Introduzca el valor de b: " <<endl;
	cin >> b;
	
	MAX(a,b);
	
	return 0;
	
}
