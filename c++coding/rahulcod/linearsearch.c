#include<stdio.h>
int main(){
	int a[10],i,item,flag=0;
	printf("enter data in the array");
	for(i=1;i<=10;i++){
        scanf("%d",&a[i]);
	}
	printf("elements to be searched in array");
	scanf("%d",&item);
	for(i=1;i<=10;i++){
		if(item==a[i]){
			flag=1;
			break;
		}
	}
		if(flag==0)
		printf("elements not found");
	else
	printf("elements are found at position=%d",i);
}