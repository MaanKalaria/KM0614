#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter val of a:");
    scanf("%d",&a);
    printf("enter val of b:");
    scanf("%d",&b);
    printf("enter an operation:");
    scanf("%d",&c);
    switch(c){
        case 1:
        if(b==0){
            printf("division not possible");
        }
        else{
            printf("%d",a/b);
        }
        break;
        case 2:
        printf("%d",a*b);
        case 3:
        printf("%d",a+b);
        break;
        case 4:
        printf("%d",a-b);
        break;
        default:
        printf("enter a valid operation:");
    }
}