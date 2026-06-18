//row with maximum 1s
//Problem Description Given a binary matrix where each row is sorted, find the 1-based index of the row containing the maximum total number of 1s. 
#include <stdio.h>
int main() 
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements :\n");
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    int maxOnes = 0;
    int rowIndex = -1;
    for(int i = 0; i < r; i++) 
    {
        int count = 0;
        for(int j = 0; j < c; j++)
         {
            if(a[i][j] == 1)
                count++;
        }
        if(count > maxOnes)
         {
            maxOnes = count;
            rowIndex = i + 1;   
        }
    }
    printf("Row with maximum 1s: %d\n", rowIndex);
    return 0;
}
