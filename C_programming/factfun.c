#include<stdio.h>


int main()
{
    int func(int);
int no, square;

printf("\n Enter an no : ");
scanf("%d",&no);

square = func(no);

printf("\n Square of no is : %d ", square);
}

int func(int x)
{
return x*x;
}