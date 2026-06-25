//WAP to find first 15 xylem numbers and print their sum
  #include <stdio.h>

int main()
{
    int count = 0, num = 100, sum = 0;

    printf("The first 15 xylem numbers are:\n");

    while(count < 15)
    {
        int ext_sum = 0, mean_sum = 0;
        int temp = num;

        // Last digit
        ext_sum += temp % 10;
        temp /= 10;

        // Middle digits
        while(temp > 9)
        {
            mean_sum += temp % 10;
            temp /= 10;
        }

        // First digit
        ext_sum += temp;

        if(ext_sum == mean_sum)
        {
            printf("%d ", num);
            sum += num;
            count++;
        }

        num++;
    }

    printf("\nThe sum of first 15 xylem numbers : %d\n", sum);

    return 0;
}