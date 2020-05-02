#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter the value of \"n\" of the series 1^3+2^3+3^3...+n^3 to get the sum : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("The sum of 1^3+2^3+3^3...+%d^3 = %d",n,sum);
    return 0;
}
