#include<stdio.h>
void main(){
    int i,n;
    printf("enter val of n:");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        printf("enter val of b[%d]:",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        a[i]=b[i];
        printf("a[%d]=%d\n",i,a[i]);
    }
}