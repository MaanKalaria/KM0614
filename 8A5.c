#include<stdio.h>
void main(){
int i=0,n,even=0,odd=0;
printf("enter your 10 integers:");
while(i<10){
    scanf("%d",&n);
    if(n%2==0){
        even++;
    }
    else{
        odd++;
    }
    i++;
}
printf("odd no are:%d\n",odd);
printf("even no are:%d",even);
}