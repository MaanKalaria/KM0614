#include<stdio.h>
void main(){
	int n,r;
	printf("Enter a number:");
	scanf("%d",&n);
	r=n%10;
	if(r%2==0){
		printf("last digit is even");
	}
		if(r%2!=0){
		printf("last digit is odd");
	}
}