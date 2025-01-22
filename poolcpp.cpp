#include <iostream>
using namespace std;

int main(){

	cout << "Enter the coords for the cue ball(separted by a space x y): ";
	int x1 , y1;
	cin >> x1 >> y1;
	
	cout <<"\nEnter the coords for the ball to hit(separted by a space x y): ";
	int x2 , y2;
	cin >> x2 >> y2;
	
	cout << "\nEnter the coords for the person(separted by a space x y): ";
	int x3 , y3;
	cin >> x3 >> y3;
	
	if ((x1 - x2) != 0 && (x1 - x3) != 0){
		if ((y2-y1)/(x2-x1) == (y3-y1)/(x3-x1)){
		cout << "\nYou are going to hit the person";
		cout << "Press any key to continue...";
		cin.get();
		
	} else {
		cout << "Good";
		cout << "Press any key to continue...";
		cin.get();
		
	}
	} else {
		cout << "Some values are invalid (x1-x2) or (x1-x3) cannot be zero";
		cout << "Press any key to continue...";

		cin.get();
	}

	return 0;
	
}
