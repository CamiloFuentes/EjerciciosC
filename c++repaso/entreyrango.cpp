/*Escriba un programa que solicite una edad /entero/ e indique la salida si la edad ingresada es una edad entre 18 y 25 anos*/
#include<iostream>
using namespace std;

int main(){
	int edad;
	cout<<"Porfavor ingrese su edad"<<endl;
	cin>>edad;
	
	if((edad>=18)&&(edad<=25)){
		cout<<"Su edad esta entre [18-25]";
	}else{
		cout<<"Su edad no esta dentro del rango requerido"<<endl;
	}
	
	
	
	return 0;
}
