#include <iostream>
using namespace std;

int main() {
	int firstNum,secondNum,temp;
	cout<<"Enter the value of First Number: ";
	cin>>firstNum;
	cout<<"Enter the value of Second Number: ";
	cin>>secondNum;
	cout<<"Values before swapping: "<<"firstNum="<<firstNum<<" and secondNum="<<secondNum<<"\n";
	temp=firstNum;
	firstNum=secondNum;
	secondNum=temp;
	cout<<"Values after swapping: "<<"firstNum="<<firstNum<<" and secondNum="<<secondNum;
	return 0;
}
