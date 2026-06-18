//matrix boundary traversal
//Problem Description Traverse the exterior boundary elements of a matrix starting from the top-left element and going in a clockwise manner. 
#include <stdio.h>
int main() 
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++)
     {
        for(int j = 0; j < c; j++)
         {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Boundary Traversal: ");
    for(int j = 0; j < c; j++) 
    {
        printf("%d ", a[0][j]);
    }
    for(int i = 1; i < r; i++)
     {
        printf("%d ", a[i][c - 1]);
    }
    if(r > 1)
     {
        for(int j = c - 2; j >= 0; j--)
         {
            printf("%d ", a[r - 1][j]);
        }
    }
    if(c > 1) {
        for(int i = r - 2; i > 0; i--)
         {
            printf("%d ", a[i][0]);
        }
    }
    return 0;
}