//Print a number pyramid (1, 12, 123, etc.).
#include <stdio.h>
int main()
 {
    int r, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
     {
        for (j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}