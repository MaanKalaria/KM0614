#include<stdio.h>
void main(){
    int n;
    printf("enter val of n:");
    scanf("%d",&n);
    if(n>=0){
        printf("entered number is positive.");
    }
    else if(n<0){
        printf("entered number is negative.");
    }
}