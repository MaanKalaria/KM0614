#include<stdio.h>
void main(){
	float bs,hra,da,gs;
	printf("enter bs:");
	scanf("%f",&bs);
	if(bs>=30000){
		hra=bs*0.3;
		da=bs*0.95;
		printf("gs=%f",gs=bs+hra+da);
	}
		else if(bs>=20000){
		hra=bs*0.25;
		da=bs*0.9;
		printf("gs=%f",gs=bs+hra+da);
	}
		else if(bs>=10000){
		hra=bs*0.2;
		da=bs*0.8;
		printf("gs=%f",gs=bs+hra+da);
	}
}
