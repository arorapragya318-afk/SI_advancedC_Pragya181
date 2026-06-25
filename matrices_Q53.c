//Check if two matrices are equal.
#include <stdio.h>
int main() 
{
int rows, cols;
printf("Enter number of rows and columns: ");
scanf("%d %d", &rows, &cols);
int A[10][10], B[10][10];
int equal = 1;
printf("Enter elements of first matrix:\n");
for (int i = 0; i < rows; i++) 
{
for (int j = 0; j < cols; j++) 
{
scanf("%d", &A[i][j]);
}
 }
printf("Enter elements of second matrix:\n");
for (int i = 0; i < rows; i++) 
{
for (int j = 0; j < cols; j++) 
{
scanf("%d", &B[i][j]);
}
 }
for (int i = 0; i < rows; i++) 
{
for (int j = 0; j < cols; j++) 
{
if (A[i][j] != B[i][j]) 
{
equal = 0;
break;
}
 }
if (equal == 0)
break;
}
if (equal)
printf("Matrices are equal.\n");
else
printf("Matrices are not equal.\n");
return 0;
}
