//WAP to find 17th number of armstrong series from beginning
#include <stdio.h>
#include <math.h>

int main()
{
    int count = 0, num = 1, target = 17;

    while(count < target)
    {
        int temp = num;
        int digits = 0, sum = 0;

        while(temp > 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;

        while(temp > 0)
        {
            int rem = temp % 10;
            sum += round(pow(rem, digits));
            temp /= 10;
        }

        if(sum == num)
        {
            count++;

            if(count == target)
            {
                printf("The 17th Armstrong number is: %d\n", num);
                break;
            }
        }

        num++;
    }

    return 0;
}