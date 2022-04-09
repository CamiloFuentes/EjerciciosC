/*La calificacion final de un estudiante es la media ponderada de tres notas:
La nota de practicas que cuenta con un 30% del total de la nota, la nota teorica
que cuenta con un 60% de la nota final y la nota de participacion que cuenta con 
el 10% restante.
Escriba un programa que lea la entrada estandar de las tres notas de un alumno y escriba 
la salida estandar de su nota final.*/

#include<iostream>

using namespace std;

int main(){
	
	float practica, teorica, participacion,nota_final ;
	
	cout<<"Porfavor digite la nota de practica:";cin>>practica;
	cout<<"porfavor digite la nota teorica:";cin>>teorica;
	cout<<"porfavor digite la nota de participacion:";cin>>participacion;
	
	practica *= 0.30; // practica = practica * 0.30; 
	teorica *= 0.60;
	participacion *= 0.10;
	 
	 nota_final = practica + teorica + participacion;
	 
	 cout<<"La nota final es :"<<nota_final;
	
	return 0;
}
