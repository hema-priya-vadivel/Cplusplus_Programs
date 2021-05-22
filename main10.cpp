/*Biggest among three no's*/

#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
	if(a>b && a>c){
		cout<<"Biggest value is a="<<a;
	}
	else if(b>c && b>a){
		cout<<"Biggest value is b="<<b;				
	}
	else{
		cout<<"Biggest value is c="<<c;
	}

}
