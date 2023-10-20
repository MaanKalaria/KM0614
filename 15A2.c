#include<stdio.h>
void main(){
    int n,i,negative=0;
    printf("enter val of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter val:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<0){
            negative++;
        }
    }
    printf("negative no=%d",negative);
}