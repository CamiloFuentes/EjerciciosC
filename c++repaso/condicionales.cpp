/*Las sentencias if and if else*/
//Condicionales multiples 
//sentencia SWITCH 


/*swithc(expresion){
	
	
	caso literal1:
		conjunto de instrucciones1;
	break;
	caso literal 2:
		conjunto de instruciones2;
	break;
	caso literaln:
		conjunto de instrucionesn;
	break;
	
	default:
		conjunto de instrucciones por defecto;
		break;
	}
*/


/*Escriba un programa que lea dos numeros y determine cual de ellos es el mayor */
#include<iostream>

using namespace std;

int main (){
	
	
	
	int num1, num2;
	
	cout<<"Porfavor digite dos numeros :";
	cin>>num1>>num2;
	
	
	if(num1==num2){
		
		cout<<"Ambos numeros son iguales :";
}
	
else	if(num1>num2){
		cout<<"El numero mayor es :"<<num1;
	}	else{
		cout<<"El numero mayor es :"<<num2;
	}
	

	return 0;
}
