#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        if(b>c){
            printf("B is largest");
        }
        else{
            printf("C is largest");
        }
    }
}