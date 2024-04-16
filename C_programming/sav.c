#include<stdio.h>
int main(){
    int a[10],i,sum=0;
    float av;
    printf("enter elements of an array");
    for(i=0;i<10;i++){
        scanf("%d",a[i]);
    }
    for(i=0;i<10;i++){
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    av=sum/10;
    printf("average=%f",av);
    return 0;
}