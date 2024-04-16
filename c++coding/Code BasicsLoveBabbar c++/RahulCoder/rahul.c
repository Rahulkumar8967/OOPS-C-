#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("enter any no");
	scanf("%d",&n); 
	for(i=1;i<n;i++){
		printf("1/%d +",i);
	}
	for(i=1;i<n;i++){
		sum=sum+i;
	}
	printf("1/%d",n);
	printf("/nsum=1/%d",sum+1/n);
}