#include<stdio.h>
void main(){
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    (c>='a'&&c<='z'||c>='A'&&c<='Z')?printf("An Alphabet"):printf("Not an Alphabet");
}