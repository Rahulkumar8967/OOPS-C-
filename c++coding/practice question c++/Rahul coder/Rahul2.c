#include <stdio.h>
#include <string.h>

int main() {  
    int i, j = 0, k, l;
    char a[20], c[20], d[20];

    printf("\n\t\tRAIL FENCE TECHNIQUE"); 
    printf("\n\nENTERING THE INPUT STRING");
    gets(a);
    l = strlen(a);
    // diciphering
    if(l%2 ==0)
    k = l/2;
    else 
    k = (l/2)+1;
    for(i = 0;i<k;i++){
        d[j] = c[i];
        j = j+2;
    }
    for( i = k, j =1;i<l;i++){
        d[j] = c[i];
        j = j+ 2;

    }
   d[l] = '\0';
   printf("\n Text after  decryption :");
   printf("%s",d);

        return 0;
}