#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter values:");
    scanf("%d %d %d",&a,&b,&c);
    d=(a>b)?1:2;
    switch(d)
    {
        case  1:
        printf("a*c=%d",a*c);
        break;
        case 2:
        printf("b*c=%d",b*c);
        break;
    }
}