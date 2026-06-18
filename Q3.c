//merge 2 sorted arrays
//Problem Description Merge two sorted numerical arrays into a single, combined array that maintains sorted order. 
#include<stdio.h>
int main()
{
    int a[10],b[10],n1,n2,i;
    printf("\n enter size of array 1");
    scanf("%d",&n1);
    printf("enter elements of array 1");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter size of array 2");
    scanf("%d",&n2);
    printf("\n enter elements of array 2");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
printf(" merged arrays are");
for(i=0;i<n1;i++)
{
    printf("%d",a[i]);
}
for(i=0;i<n2;i++)
{
    printf("%d",b[i]);
}
return 0;
}
