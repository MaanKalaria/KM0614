#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    printf("enter 3 sides:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c&&c==a){
        printf("triangle is equi");
    }
    else if(a==b||b==c||c==a){
        printf("triangle is isoceles");
    }
    else if((a*a)+(b*b)==(c*c)){
        printf("triangle is right angled");
    }
    else{
        printf("triangle is scalane");
    }
}