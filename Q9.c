//spiral matrix generation
//Problem Description Given an integer N, generate an N x N matrix filled with elements from 1 to N² in a spiral clockwise order pattern. 
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    int a[n][n];
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;
    while (top <= bottom && left <= right)
     {
        for (int i = left; i <= right; i++)
            a[top][i] = num++;
        top++;
        for (int i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;
        if (top <= bottom) 
        {
            for (int i = right; i >= left; i--)
                a[bottom][i] = num++;
            bottom--;
        }
        if (left <= right)
         {
            for (int i = bottom; i >= top; i--)
                a[i][left] = num++;
            left++;
        }
    }
    printf("Spiral Matrix:\n");
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
         {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
