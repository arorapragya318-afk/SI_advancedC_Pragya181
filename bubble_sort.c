//bubble sort
#include<stdio.h>

int main()
{
    int a[10], i, j, swap;

    printf("Enter 10 unsorted numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
        }
    }

    printf("\nSorted data:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}