//Generate the Fibonacci sequence up to N terms.
#include<stdio.h>
int main()
{
    int n,i,f1=0,f2=1,f3;
    printf("enter number of terms in the series");
    scanf("%d",&n);
    printf("\n fibonacci series upto %d terms is :",n);
    printf("\n%d\n%d",f1,f2);
    for(i=1;i<=n-2;i++)//n-2 as two terms are already printed on the screen
    {
        f3=f1+f2;
        printf("\n%d",f3);
        f1=f2;
        f2=f3;
        return 0;
    }
}