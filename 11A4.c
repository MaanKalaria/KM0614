#include<stdio.h>
void main(){
    int i,x,y,sum=1;
    printf("enter val of x:");
    scanf("%d",&x);
    printf("enter val of y:");
    scanf("%d",&y);
    for(i=1;i<=x;i++){
        sum*=x;
    }
    printf("%d",sum);
}