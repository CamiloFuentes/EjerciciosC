/*Comprobar si el numero ingresado es negativo o es positivo*/

#include<iostream>

using namespace std;

int main(){
	
	int num;
	cout<<"Porfavor digite un numero para comprobar si es POSITIVO o  NEGATIVO :"<<endl;
	
	cin>>num;
	
	if(num==0){
		cout<<"El numero es cero idiota!";
	}
	else if(num > 0 ){
		cout<<"El numero es positivo !!";
	}else{
		cout<<"El numero es negativo !!";
	}
	
	
	return 0;
}
