/*Fibonacci series with recursion*/

#include <iostream>  
using namespace std;  

int fibonacci(int num){
   if(num==0){
       return num;
   }
   else if(num==1){
       return num;
   }
   else{
       return fibonacci(num-1)+fibonacci(num-2);
   }
}

int main() {  
    int num;    
    cout<<"Enter the number: ";    
    cin>>num;    
    for(int i=0;i<num;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
 }  

