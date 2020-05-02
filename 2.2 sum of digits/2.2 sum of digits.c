#include<stdio.h>
int main()
{
    int num, sum=0,tem;
    printf("Enter any number to get the sum of digits\n");
    scanf("%d",&num);
    while(num!=0)
    {
        tem=num%10;
        sum=sum+tem;
        num=num/10;
    }

    printf("The sum of the digits is =%d",sum);





    return 0;
}

