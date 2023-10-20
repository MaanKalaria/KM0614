#include<stdio.h>
void main(){
    int n,i,count=0;
    printf("enter val of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter val:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%3==0)
        count++;
    }
    printf("count=%d",count);
}