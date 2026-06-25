//WAP to check whether an array has atleast one palindrome number or not.
#include<stdio.h>
int main()
{
    int a[10],rem,rev=0,count=0;
    printf("Enter elements in array \n ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<10;j++)
    {
        rev=0;
        for(int temp=a[j];temp>0;temp/=10)
        {
            rem=temp%10;
            rev=rev*10+rem;
        }
        if(rev==a[j])
        {
            count++;
        }
        if(count>=1)
        {
            printf("array consist at least one palindrome number");
            break;
        }

        }
        return 0;
    }
