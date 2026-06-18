//WAP to transpose a matrix of 5*3
#include <stdio.h>
int main()
 {
    int a[5][3], t[3][5];
    int i, j;
    printf("Enter elements of 5x3 matrix:\n");
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 3; j++)
         {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 5; i++)
     {
        for(j = 0; j < 3; j++)
         {
            t[j][i] = a[i][j];
        }
    }
    printf("Transpose Matrix :\n");
    for(i = 0; i < 3; i++)
     {
        for(j = 0; j < 5; j++)
         {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}