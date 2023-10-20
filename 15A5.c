#include<stdio.h>
#include<string.h>
void main(){
    char a[100];
    int i,n=0;
    printf("enter val of array:");
    gets(a);
    printf("%s\n",a);
    for(i=0;a[i]!='\0';i++){
        n++;
    }
    printf("%d",n);
}