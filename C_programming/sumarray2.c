
#include <stdio.h>

int  main()
{
    int a[10][10], b[10][10], c[10][10], n, i,j;

    printf("Enter the number of elements:\t");
    scanf("%d", &n);

    printf("Enter %d elements for array 1:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i][j]);

    printf("Enter %d elements for array 2:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &b[i][j]);

    for (i = 0; i < n; i++)
        c[i][j] = a[i][j]+ b[i][j];

    printf("Sum of two array elements are:\n");

    for (i = 0; i < n; i++)
        printf("%d\n", c[i][j]);

return 0;
}