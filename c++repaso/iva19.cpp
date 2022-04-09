#include<iostream>




using namespace std;

int main(){
	
	float precio;
	char nproducto[20];
	
	cout<<"PROGRAMA PARA SEAVER EL COSTO DE LOS PRODUCTOS SIN EL IVA DEL 19%"<<endl;
	cout<<"**************************************************************"<<endl;
	cout<<"Porfavor ingrese el NOMBRE de su producto:"<<endl;
	
	cin>>nproducto;
	
	cout<<"Por favor ingrese el PRECIO de su producto:"<<endl;
	
	cin>>precio;
	
	cout<<"El valor de su producto sin el valor del iva del 19% es :"<<endl;
	
	cout<<   precio / 1.19 <<endl;//calculo para restar el valor del 19%
	
	
	
	
	
	return 0;
	
}
