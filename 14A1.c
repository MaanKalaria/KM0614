#include<stdio.h>
void main(){
    int i,n;
    printf("enter val of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter val:");
        scanf("%d",&a[i]);
    }
    for(i=n-1;i!=-1;i--){
        printf("reverse order:%d\n",a[i]);
    }
}