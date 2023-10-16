#include<stdio.h>
    int main(){
        float p,r,t,SI;
        printf("Enter the value of p:");
        scanf("%f",&p);
        printf("Enter the value of r:");
        scanf("%f",&r);
        printf("Enter the value of t:");
        scanf("%f",&t);
        SI=(p*r*t)/100;
        printf("Simple Interest is:%f",SI);
        return 0;
}
