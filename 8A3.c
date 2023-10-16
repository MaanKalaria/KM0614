#include<stdio.h>
void main(){
    int a,b;
    printf("enter val of a:");
    scanf("%d",&a);
    printf("enter val of b:");
    scanf("%d",&b);
    if(a%2!=0){
    a++;
    }
    while(a<=b){
        printf("%d\n",a);
        a+=2;
    }
}