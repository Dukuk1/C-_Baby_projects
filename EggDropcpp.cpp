#include <iostream>
using namespace std;

int main(){
	
	
	
	cout<<"Enter the velocity: ";
	int v;
	cin>>v;
	double t;
	t = v/9.8;
	double d;
	d = t*t*4.9;
	cout<<"\nThe max distance in meters is "<<d;
	
}
