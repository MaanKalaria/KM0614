#include<stdio.h>
void main(){
    int a,b;
    printf("enter val of a:");
    scanf("%d",&a);
    printf("enter val of b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);
}