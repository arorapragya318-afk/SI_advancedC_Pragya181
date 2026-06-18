//WAP to delete an element from an specific position
#include<stdio.h>
int main()
{
    int a[100],n,pos,i;
    printf("enter number of elements : ");
    scanf("%d",&n);
    printf("enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position to delete : ");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("array after deletion");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}