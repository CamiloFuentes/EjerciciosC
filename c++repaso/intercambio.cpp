//Programa que intercambia los valores de las variables 
#include<iostream>

using namespace std;

int  main(){
	int x;
	int y;
	int aux;
	
	cout<<"porfavor digite el valor de x:"; cin>>x;
	cout<<"porfavor digite el valor de y:";cin>>y;
	
	aux=x;
	x=y;
	y= aux;
	/**/
	cout<<"n\El nuevo valor de x es: "<<x<<endl;
	cout<<"El valor de y es :"<<y<<endl;
	return 0;
}
