#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter the value of \"n\" of the series 1+2+3+4...+n to get the sum : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of 1+2+3+...+%d = %d",n,sum);
    return 0;
}
