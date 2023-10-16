#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,d,r1,r2,e,f;
    printf("enter val of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    e=b*b;
    f=-(4*a*c);
    d=e+f;
    r1=(-b+sqrt(d))/2*a;
    r2=(-b-sqrt(d))/2*a;
    printf("%d %d",r1,r2);
}