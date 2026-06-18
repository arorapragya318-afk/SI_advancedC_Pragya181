//search in sorted matrix
//Problem Description Efficiently search for a target value within a 2D matrix that is sorted both row-wise and column-wise. 
#include <stdio.h>
int main()
 {
    int r, c, target;
    printf("Enter rows and columns: ");
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
    printf("Enter target value: ");
    scanf("%d", &target);
    int i = 0;
    int j = c-1;
    while(i < r && j >= 0)
     {
        if(a[i][j] == target)
         {
            printf("Element found at row %d, column %d\n", i + 1, j + 1);
            return 0;
        }
        else if(a[i][j] > target)
         {
            j--;
        }
        else 
        {
            i++;
        }
    }
    printf("Element not found\n");
    return 0;
}
