#include<stdio.h>
void main(){
    int n,i,c,flag=0;
    printf("enter val of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter val:");
        scanf("%d",&a[i]);
    }
    printf("enter val to check:");
    scanf("%d",&c);
    for(i=0;i<n;i++){
        if(a[i]==c){
        flag=1;
        break;
        }
    }
    if(flag==1){
        printf("matched");
    }
    else{
        printf("not matched");
    }
}