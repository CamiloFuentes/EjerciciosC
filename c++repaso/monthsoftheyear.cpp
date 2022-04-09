/*Show the months of the year, asking at the user a number between 1 and 12 and print wich month is it */
#include<iostream>

using namespace std;

int main (){
	
	
	int number;
	
	cout<<"Type a number between (1-12) : "<<endl;
	cin>>number;
	
	if(number > 12 || number < 1 ){
		
		cout<<"Wrong number!";
		
	}else{
		
		switch(number){
		
			case 1 : cout<<"january";break;
			case 2 : cout<<"febrary";break;
			case 3 : cout<<"march";break;
			case 4 : cout<<"april";break;
			case 5 : cout<<"may";break;
			case 6 : cout<<"june";break;
			case 7 : cout<<"july";break;
			case 8 : cout<<"august";break;
			case 9 : cout<<"september";break;
			case 10 : cout<<"october";break;
			case 11: cout<<"november";break;
			case 12 : cout<<"dicember";break;
			
			
		}
		
	}
	
	return 0;
}
