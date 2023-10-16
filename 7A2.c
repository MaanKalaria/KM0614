#include<stdio.h>
void main(){
    int month;
    printf("enter a number(1-12):");
    scanf("%d",&month);
    switch(month){
        case 1:
        printf("JANUARY:31");
        break;
        case 2:
        printf("FRBUARY:28");
        break;
        case 3:
        printf("MARCH:31");
        break;
        case 4:
        printf("APRIL:30");
        break;
        case 5:
        printf("MAY:31");
        break;
        case 6:
        printf("JUNE:30");
        break;
        case 7:
        printf("JULY:31");
        break;
        case 8:
        printf("AUGEST:31");
        break;
        case 9:
        printf("SEPTEMBER:30");
        break;
        case 10:
        printf("OCTOBER:31");
        break;
        case 11:
        printf("NOVEMBER:30");
        break;
        case 12:
        printf("DECEMBER:31");
        break;
        default:
        printf("enter a valid number!");
        break;
    }
}