#include <iostream>
using namespace std;

int main(){
	
	cout<<"Enter the coords for the cue ball(separted by a space x y): ";
	int x1 , y1;
	cin>>x1>>y1;
		cout<<"\nEnter the coords for the ball to hit(separted by a space x y): ";
	int x2 , y2;
	cin>>x2>>y2;
		cout<<"\nEnter the coords for the person(separted by a space x y): ";
	int x3 , y3;
	cin>>x3>>y3;
	if ((y2-y1)/(x2-x1) == (y3-y1)/(x3-x1)){
		cout<<"\nyou are going to hit";
	} else{
		cout<<"good";
	}
	
}
