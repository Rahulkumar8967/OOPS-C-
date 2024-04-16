#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("enter an integer");
	scanf("%d",&n);
	printf("1");
	for(i=2;i<n;i++){
		printf("1/%d+", i );
	}
	for(i=1;i<n;i++){
		sum=sum+i;
			// printf("1/%d",n);
	}
	printf("1/%d",n);
	printf("\n sum=%d",sum=sum+n);
	return 0;
}