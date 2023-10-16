#include<stdio.h>
void main(){
    int a,b;
    printf("enter val of a:");
    scanf("%d",&a);
    printf("enter val of b:");
    scanf("%d",&b);
    if(a>b){
        printf("a is largest.");
    }
    else if(b>a){
        printf("b is largest.");
    }
}