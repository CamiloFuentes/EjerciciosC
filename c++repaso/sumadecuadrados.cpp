/*Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados de los
10 primeros enteros mayores a cero .*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int suma = 0;
	int cuadrado;
	for(int i=1;i<=10;i++){
		cuadrado=i*i;
		suma + suma + cuadrado;
	}
	
	
	cout<<"el resultado de la suma es :"<<suma;
	getch();
	return 0;
	
}
