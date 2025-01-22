#include <iostream>
using namespace std;

int main(){
	cout<<"Input your bill price: ";
	int bill;
	cin>>bill;
	if(bill>=500){
		double tax;
		tax = bill*0.02;
		cout<<"\nthe orginal price: "<<bill;
		cout<<"\nthe tax is: "<<tax;
		cout<<"\nThe total is: "<<bill+tax;		
	} else{
		double tax;
		tax = bill*0.05;
		cout<<"\nthe orginal price: "<<bill;
		cout<<"\nthe tax is: "<<tax;
		cout<<"\nThe total is: "<<bill+tax;	
	}

}
