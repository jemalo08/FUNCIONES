#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using std::cout;
using std::cin;
using std::endl;


int FACTORIAL(int j){
	int i;
	int resultado = 1;
	for (i=1; i<=j; i++){
		resultado *=i;
	}
	return resultado;
}


int main(){
	
	int m;
	cout << "Introduzca el valor de m: " <<endl;
	cin >> m;
	int fact = FACTORIAL(m);
	cout << "El factorial es: " <<fact;
	
	return 0;
}
