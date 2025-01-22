#include <iostream>
using namespace std;

int main()//triangle checking
{
	
	cout<<"enter the first side: \n";
	int A;
	cin>>A;
	cout<<"enter the second side: \n";
	int B;
	cin>>B;
	cout<<"enter the third side: \n";
	int C;
	cin>>C;
	if(A+B>C && B+C>A && C+A>B){
		cout<<"good";
		
	} else{
		cout<<"bad";
	}
	
}
