#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int N;
	cout<<"DIgite un numero :"<<endl;
	cin>>N;
	 
	if(N % 2 == 0){
		cout<<"Par"<<endl;
	}else
	cout<<"Impar";
	
	getch();
	return 0;
}
