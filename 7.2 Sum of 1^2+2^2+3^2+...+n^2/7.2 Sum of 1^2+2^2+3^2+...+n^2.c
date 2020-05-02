#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter the value of \"n\" of the series 1^2+2^2+3^2...+n^2 to get the sum : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("The sum of 1^2+2^2+3^2...+%d^2 = %d",n,sum);
    return 0;
}
