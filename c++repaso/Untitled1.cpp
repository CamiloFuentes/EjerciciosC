//first program

#include<iostream>

using namespace std;


int main (){

int num1;
int num2;


cout <<"Operacion"  << endl;
cout <<"Digite un numero"  << endl;//primera pregunta 

cin>>num1;
 
cout<<"digite un segundo numero"<< endl;//segunda pregunta

cin>>num2;

int mult = num1 * num2;

int div = num1 / num2;

int sum = num1 + num2;

int res = num1 - num2;

int mod = num1 % num2;


cout<<"El resultado de las operaciones es :"<<endl;
cout <<mult + div + mod + sum + res<< endl;

cout<< mult <<endl; //falta la concatenacion 
cout<< div <<endl;
cout<< sum <<endl;
cout<< res <<endl;
cout<< mod <<endl;

cout<<"gracias por su participacion"<< endl;
return 0;
}
