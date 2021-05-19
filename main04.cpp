//Find quotient and remainder

#include <iostream>
using namespace std;

int main(){
	int dividend,divisor,quo,rem;
	cout<<"Enter the dividend: ";
	cin>>dividend;
	cout<<"Enter the divisor: ";
	cin>>divisor;
	quo=dividend/divisor;
	rem=dividend%divisor;
	cout<<"Quotient is: "<<quo;
	cout<<"\nRemainder is: "<<rem;
	return 0;
}
