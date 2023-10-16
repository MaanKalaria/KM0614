#include<stdio.h>
void main(){
    float a,b;
    char n;
    printf("enter operation:");
    scanf("%c",&n);
    printf("enter val of a:");
    scanf("%f",&a);
    printf("enter val of b:");
    scanf("%f",&b);
    if(n=='-'||n=='+'||n=='*'||n=='/'){
        if(n=='+'){
            printf("Add=%f",a+b);
        }
        else if(n=='-'){
            printf("Sub=%f",a-b);
        }
        else if(n=='*'){
            printf("MULTI=%f",a*b);
        }
        else if(n=='/'){
            if(b==0){
                printf("NOT DEFINED");
            }
            else{
                printf("DIVIDE=%f",a/b);
            }
        }
    }
    else{
        printf("ENTER A VALID OPERATION!");
    }
}