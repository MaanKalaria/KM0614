#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter val of a:");
    scanf("%d",&a);
    printf("enter val of b:");
    scanf("%d",&b);
    printf("enter val of c:");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is largest.");
    }
    else if(b>a && b>c){
        printf("b is largest.");
    }
    else{
        printf("c is largest.");
    }
}