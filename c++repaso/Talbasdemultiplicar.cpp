/*Realize un programa que solicite la entrada de un numero del 1 al 10 y muestre su respectiva tabla de multiplicacion */

#include<iostream>

using namespace std;

int main (){
	
	int num;
	
	
	do{
		cout<<"Ingrese un numero entre 1 y 10 : ";
		cin>>num;		
	}while((num < 1)||(num>10));
	
	for(int i = 1;i<=20;i++){
		
		cout<<num<<" * "<<i<<" = "<<num * i<<endl;
		
	}
	
	
	
		
	
	
	
	return 0;
}

