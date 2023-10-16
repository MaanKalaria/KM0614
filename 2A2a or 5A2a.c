#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter val of a:");
    scanf("%d",&a);
    printf("enter val of b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d b=%d",a,b);
}