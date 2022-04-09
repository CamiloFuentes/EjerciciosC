/*Escriba un programa que lea tres numeros y determine cual es el mayor de ellos*/

#include<iostream>

using namespace std;

int main (){
	
	int n1,n2,n3;
	int max;
	cout<<"Por favor digite tres numeros :";
	cin>>n1>>n2>>n3;
	
	max=n1;
	
	if(n2>max){
		max=n2;
	}
	
	if(n3>max){
		max=n3;
	}
	
	cout<< "El numero mayor es :"<<max;
	return 0;
}
