#include<stdio.h>
#include<math.h>
void main(){
    int n=0;
    float a;
    while(n<=9){
        a=sqrt(n);
        printf("%d=%f\n",n,a);
        n++;
    }
}