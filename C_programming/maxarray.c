#include<stdio.h>
int main(){
    int a[5],max,i;
    printf("enter elements of an array");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);  
    }
    max=a[0];
    for(i=1;i<5;i++){
       if (max<a[i]){
        max=a[i];
       }
    }
    printf("maximum no.=%d",max);
    return 0;

    
}