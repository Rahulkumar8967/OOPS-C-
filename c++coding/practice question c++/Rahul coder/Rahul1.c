#include <stdio.h>
#include <string.h>

int main() {  
    int i, j = 0, k, l;
    char a[20], c[20], d[20];

    printf("\n\t\tRAIL FENCE TECHNIQUE"); 
    printf("\n\nENTERING THE INPUT STRING");
    gets(a);
    l = strlen(a);

    // ciphering
    for (i = 0; i < l; i++) {
        if (i % 2 == 0)
            c[j++] = a[i];
    }

    j = 0; 
    for (i = 0; i < l; i++) {
        if (i % 2 != 0) 
            c[j++] = a[i];
    }
    c[j] = '\0'; 
    printf("\nCipher text after applying rail fence:\n");
    printf("%s", c);

    return 0;
}
