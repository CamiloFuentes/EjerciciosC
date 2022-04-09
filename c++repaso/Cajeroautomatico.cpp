/*Hacer un programa que simule un cagero automatico con un saldo inicial de 
1000 dolares 
-Condicionales multiples 
-Switch
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main (){
	
	int saldo_inicial=1000,opc;
	float extra,saldo = 0, retiro;
	
	cout<<"\tBienvenido a su cajero virtual"<<endl;
	cout<<"1.Ingresar dinero en la cuenta"<<endl;
	cout<<"2.Retirar dinero de la cuenta"<<endl;
	cout<<"3.Mostrar saldo actual"<<endl;
	cout<<"4.Salir"<<endl;


cout<<"**********************************"<<endl;
		cout<<"Opcion: ";
	cin>>opc;
	
	switch(opc){
		
		case 1 :
			cout<<"Digite cuanto va a ingresar :";
			cin>>extra;
			saldo=saldo_inicial + extra; 
			cout<<"Dinero en cuenta :" <<saldo; break;
			
		case 2 :
			cout<<"Digite la cantidad que va a retirar :";
			cin>>retiro;
			if(retiro>saldo_inicial){
				
				cout<<"No tiene suficientes fondos...";
				}else{
					saldo = saldo_inicial - retiro;
					cout<<"Dinero catual en la cuenta :"<<saldo;break;	
				}
			
		case 3 : 
			cout<<"Mi saldo actual es... "<<saldo_inicial;
			
		
		case 4 : break;
		
		
				
				
			}
				return 0;
	}
	
	




