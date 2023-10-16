#include<stdio.h>
void main(){
    int i=1,n,sum=0,sign=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        sum+=sign*i;
        sign=-sign;
        i++;
    }
    printf("Sum of the series:%d\n",sum);
}