/*Escriba un programa que lea la entrada de un catacter e indique si el caracter es una vocal minuscula o no*/
#include<iostream>

using namespace std;

int main (){
	
	char letra;
	cout<<"Porfavor digite un caracter"<<endl;
	cin>>letra;
	
	switch(letra){
		case 'a':
			
		case 'e':
			
		case 'i':
			
		case 'o':
			
		case 'u':
			cout<<"Es una vocal minuscula";
			break;
			
			default : 
			cout<<"NO es una vocal minuscula ";
			break;
	}
	
	return 0;
}
