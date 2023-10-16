#include<stdio.h>
void main(){
    char c='a',d='A';
    while(c<='z' && d<='Z'){
        printf("%c,%c\n",c,d);
        c++;
        d++;
    }
}