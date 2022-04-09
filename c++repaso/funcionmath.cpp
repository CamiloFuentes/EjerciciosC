/*Realize un programa que calcule el valor que toma la siguiente funcion para 
unos valores dadeos de  x e y :*/

#include<iostream>
#include<math.h>

using namespace std;
int main (){
	
	float x, y, resultado = 0;
	cout<<"Digite el valor de x:";cin>>x;
	cout<<"Digite el valor de y:";cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"n\El resultado es :"<<resultado;
	
	return 0;
}
