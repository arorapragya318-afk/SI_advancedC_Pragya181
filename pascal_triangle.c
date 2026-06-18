//WAP to take an input from a user as a number of rows and print pascal triangle
#include<stdio.h>
int main()
{
    int r,i,j;
    printf("enter number of rows");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
       for(int j=1;j<r-i;j++)
        {
            printf(" ");
        }
         for(int j=1;j<=2*i-1;j++)
         {
            printf("2");
         }
         printf("\n");
    }
    return 0;
}