// #include<stdio.h>
// int main(){
// 	int a[3][2],b[2][3],i,j;
// 	printf("enter value of a matrix");
// 	for(i=0;i<3;i++){
// 		for(j=0;j<2;j++)
// 		scanf("%d",&a[i][j]);
// 	}
// 	printf("matrix\n");
// 	for(i=0;i<3;i++){
// 		for(j=0;j<2;j++){
// 			printf("%d",a[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	for(i=0;i<3;i++){
// 		for(j=0;j<2;j++)
// 		b[i][j]=a[i][j];
// 	}
// 	printf("transpose of matrix\n");
// 	for(i=0;i<2;i++){
// 		for(j=0;j<3;j++)
// 		printf("%",b[i][j]);
// 		printf("\n");
// 	}
// 	return 0;
// }
#include<stdio.h>
int main(){
	int a[10],i,item,flag=0;
	printf("enter data of an array");
	for(i=0;i<10;i++){
	scanf("%d",&a[i]);
}
   printf("elements searched in array");
   scanf("d",&item);
   for(i=0;i<10;i++){
   	if(item==a[i]){
   		flag=1;
   		break;
	   }
   }
   if(flag==0)
   printf("elements not found");
   else
   printf("elements was found at position=%d",i); 
}