//WAP to insert an element on a specific position
#include<stdio.h>
int main()
{
    int a[100],n,pos,ele,i;
    printf("enter number of elements : ");
    scanf("%d",&n);
    printf("\n enter array elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter position to insert");
    scanf("%d",&pos);
    printf("\n enter element to insert");
    scanf("%d",&ele);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i]-1;
    }
    a[pos-1]=ele;
    n++;
    printf("array after insertion : ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
return 0;
}