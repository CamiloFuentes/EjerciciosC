/*Programa para saver el mayor de tres numero parte dos*/
#include<iostream>
using namespace std;
int main(){
	
	float n1, n2, n3;
	float max;
	cout<<"PROGRAMA PARA SABER EL MAYOR ENTRE TRES NUMEROS"<<endl;
	cout<<"       "<<endl;
	
	cout<<"Digite el primer numero"<<endl;
	cout<<"***********************"<<endl;
	cin>>n1;
	cout<<"Digite el segundo numero"<<endl;
	cout<<"***********************"<<endl;
	cin>>n2;
	cout<<"Digite el tercer numero"<<endl;
	cout<<"************************"<<endl;
	cin>>n3;
	
	
	n1 = max;
	
	if(max>n2){
		max=n2;
	}else{
		max = n3;
	}
	cout<<"El numero mayor es :"<<max;
	
	return 0;
}
