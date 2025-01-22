#include <iostream>
using namespace std;
int main(){
cout<<"Enter three numbers: ";
int a, b, c;
cin>>a>>b>>c;
int sum;
cout<<"enter the goal sum: ";
cin>>sum;
if(a!=b && b!=c && c!=a && a+b+c==sum){
	cout<<"PERFECT TRIPLET";
	
} else{
	cout<<"NOT GOOD";
}



}
