#include <iostream>
using namespace std;

int main(){
	cout<<"Please enter your the numbers(separted by a space)\n";
	int a, b, c;
	cin>>a>>b>>c;
	cout<<"\na: "<<a;
	cout<<"\nb: "<<b;
	cout<<"\nc: "<<c;
		if(a<b && b<c){
		cout<<"\nPerfectly balabced as all things should be!";
		
	} else{
		cout<<"\nIMPERFECT!";
	} 
}
