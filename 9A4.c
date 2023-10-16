#include<stdio.h>
void main(){
    int number,factorial=1;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number<0){
        printf("Factorial is not defined for negative numbers.\n");
    }
    else{
        while(number>0){
            factorial*=number;
            number--;
        }
        printf("The factorial is:%d\n",factorial);
    }
}