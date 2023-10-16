#include<stdio.h>
void main(){
	int a,b,c,d,e,per;
	printf("Enter all marks:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	per=(a+b+c+d+e)/5;
	if(per<35){
		printf("FAIL");
	}
		else if(36<=per && per>=45){
		printf("PASS");
    }
		else if(46<=per && per>=60){
		printf("SECOND CLASS");
	}
		else if(61<=per && per>=70){
		printf("FIRST CLASS");
	}
	else{
	printf("DISTINCT");	
	}
}
