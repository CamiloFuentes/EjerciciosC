/*Realize un programa que lea un valor entero y determine si se trata de un numero par o impar*/
#include<iostream>

using namespace std;


int main (){
	
	int num;
	
	cout<<"Porfavor digite un numero para determinar si es par o no :";
	
	cin>>num;
	
	
	if(num==0){
		cout<<"El numero es cero";
	}
	
else if(num%2==0){
		cout<<"El numero es par ";
	}
	else{
		cout<<"El numero es impapr";
}
	return 0;

}
