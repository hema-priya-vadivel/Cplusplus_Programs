/*Sum of natural numbers*/

#include<iostream>
using namespace std;

int main(){
	int n,sum=0;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(int i=0;i<=n;i++){
		sum+=i;
	}	
	cout<<"Sum="<<sum;
	return 0;
}
