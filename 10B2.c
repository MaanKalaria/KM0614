#include<stdio.h>
void main(){
    int n,i=1,flag=0;
    scanf("%d",&n);
    while(i<=n){
        if(n%1==0){
            flag++;
        }
        i=i+1;
    }
    if(flag==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}