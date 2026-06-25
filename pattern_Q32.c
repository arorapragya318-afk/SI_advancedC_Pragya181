// Print a diamond shape. 
#include <stdio.h>
int main() {
    int r, i, j, sp;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    for (i = 1; i <= r; i++)
     {
        for (sp = 1; sp <= r - i; sp++)
         {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = r - 1; i >= 1; i--)
     {
        for (sp = 1; sp <= r - i; sp++)
         {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
         {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}