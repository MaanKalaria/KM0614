#include<stdio.h>
void main(){
    double units,totalbill;
    printf("enter units:");
    scanf("%d",&units);
    if(units<=50){
        printf("totalbill=%d",units*0.50);
    }
    else if(units<=100){
        printf("totalbill=%d",50*5+(units-50)*0.75);
    }
    else if(units<=200){
        printf("totalbill=%d",50*5+100*0.75+(units-200)*1.2);
    }
    else if(units<=250){
        printf("totalbill=%d",50*5+100*0.75+200*1.2+(units-250)*1.5);
    }
    totalbill= totalbill + totalbill*0.2;
    printf("totalbill=%d",totalbill);
}