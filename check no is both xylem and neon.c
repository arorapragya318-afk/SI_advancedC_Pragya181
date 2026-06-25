//WAP to find whether a number is xylem as well as neon number
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int isXylem = 0;

    if(num >= 100)
    {
        int tempX = num;
        int ext_sum = 0, mean_sum = 0;

        ext_sum += tempX % 10;  // last digit
        tempX /= 10;

        while(tempX > 9)
        {
            mean_sum += tempX % 10;
            tempX /= 10;
        }

        ext_sum += tempX;       // first digit

        if(ext_sum == mean_sum)
        {
            isXylem = 1;
        }
    }

    int isNeon = 0;
    int sq = num * num;
    int sumN = 0;

    while(sq > 0)
    {
        sumN += sq % 10;
        sq /= 10;
    }

    if(sumN == num)
    {
        isNeon = 1;
    }

    if(isXylem && isNeon)
    {
        printf("%d is both xylem and neon number\n", num);
    }
    else
    {
        printf("%d is not both xylem and neon number\n", num);
    }

    return 0;
}