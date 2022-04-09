/*Programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos*/

#include<iostream>

using namespace std;
int main(){
	
	cout<<"PROMEDIO NOTA DE 4 ALUMNOS"<<endl;
	
	int n1,n2,n3,n4;
	float prom;
	
	cout<<"\nIngrese las notas del primer estudiante:"<<endl;
	cout<<"Nota 1:";cin>>n1;
	cout<<"Nota 2:";cin>>n2;
	cout<<"Nota 3:";cin>>n3;
	cout<<"Nota 4:";cin>>n4;
	
	prom = (n1 + n2 + n3 + n4)/ 4;
	
	cout<<"El promedio de las notas del primer alumno es :"<<prom<<endl;
	
	
	return 0;
}
