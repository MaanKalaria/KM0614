#include<stdio.h>
void main(){
    int n;
    printf("enter val of n:");
    scanf("%d",&n);
    if(n%2==0){
        printf("entered number is even.");
    }
    else if (n%2!=0){
        printf("entered number is odd.");
    }
}