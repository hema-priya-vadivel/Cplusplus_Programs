//To find vowel or consonant

#include<iostream>
using namespace std;

int main(){
	char ch;
	int lowercasevowel,uppercasevowel;
	cout<<"Enter a character: ";
	cin>>ch;
	lowercasevowel =(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	uppercasevowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(lowercasevowel||uppercasevowel){
		cout<<ch<<" is a vowel.";
	}
	else{
		cout<<ch<<" is a consonant.";
	}
	return 0;
}
