#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	printf("enter a string");
	scanf("%d",&a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0){
		printf("string is a palindrome");
	}else{
		printf("string is not palindrome ");
	
    } 
}