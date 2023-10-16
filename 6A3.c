#include<stdio.h>
void main(){
	char c;
	printf("Enter a char:");
	scanf("%c",&c);
	if(c>='A'&&c<='Z'){
		printf("character is upper case");	
	}
	else if(c>='a'&&c<='z'){
	printf("character is lower case");	
	}
		else if(c>='0'&&c<='9'){
	printf("character is digit");
	}
	else{
		printf("special character");
	}
}