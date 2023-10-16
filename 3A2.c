#include<stdio.h>
void main(){
    int x,y,z;
    printf("enter val of x:");
    scanf("%d",&x);
    printf("enter val of y:");
    scanf("%d",&y);
    printf("enter val of z:");
    scanf("%d",&z);
    if(x>y && y>z){
        printf("%d\n %d\n %d",x,y,z);
    }
    else if(x>y && z<x){
        printf("%d\n %d\n %d",y,z,x);
    }
    else if(x>y && z>x){
        printf("%d\n %d\n %d",y,x,z);
    }
    else if(y>x && x>z){
        printf("%d\n %d\n %d",z,x,y);
    }
    else if(y>x && x<z){
        if(y>z){
            printf("%d\n %d\n %d",x,y,z);
        }
        else if(y>x && x<z && y<z){

            printf("%d\n %d\n %d",x,z,y);
        }
    }
}