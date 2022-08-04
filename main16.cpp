#include<stdio.h>
void ShellSort(int a[],int n)
{
int i,j,increment,tmp;
for(increment=n/2;increment>0;increment/=2){
    for(i=increment;i<n;i++){
        tmp=a[i];
        for(j=i;j>=increment;j-=increment){
          if(tmp<a[j-increment])
                a[j]=a[j-increment];
          else
                break;
        }
        a[j]=tmp;
    }
}
}

int main(){
    int a[6]={14,23,8,19,63,153};
    int n=sizeof(a)/sizeof(int);
    ShellSort(a,n);
    printf("Sorted items:\n");
    for(int i=0;i<n;i++)
        printf("%d \n",a[i]);
    printf("\n");
    return 0;
}



