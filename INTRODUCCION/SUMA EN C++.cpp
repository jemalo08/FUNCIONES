#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using std::cout;
using std::cin;
using std::endl;


void suma(int a, int b){
	
int c=a+b;
cout << "La suma de a+b es: " << c <<endl; 
	
}


int main(){
	
	int N1, N2; 
	
	cout << "Introduzca el valor de a: " <<endl;
	cin >> N1; 
	cout << "Introduzca el valor de b: " <<endl;
	cin >> N2;
	
	suma(N1,N2);
	
	return 0;
	
}
