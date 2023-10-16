#include<stdio.h>
void main(){
    int units,bill;
    printf("enter the units:");
    scanf("%d",&units);
    if(units<=50){
        bill=units*0.5;
    }
    else if(50<units<=150){
        bill=(50*0.5)+(units-50)*0.75;
    }
    else if(150<units<=250){
        bill=(50*0.5)+(100*0.75)+(units-150)*0.75;
    }
    else if(units>250){
        bill=(50*0.5)+(100*0.75)+(100*1.2)+(units-250)*1.5;
    }
    bill=(bill+bill*0.2);
    printf("bill=%d",bill);
}