#include<stdio.h>
int main()
{
    int num,tem;
    int sum=0;
    printf("Enter any number to get generic root of the number\n");
    scanf("%d",&num);
     if(num < 10)
    {
        printf("The Generic Root of a Given Number = %d", num);
    }
    else
    {
    while(num>=10)
    {
    while(num!=0)
    {
        tem=num%10;
        sum=sum+tem;
        num=num/10;
    }
    if(sum>=10)
    {
    num=sum;
    sum=0;
    }
    else
    {
        printf("The generic root of the number is: %d",sum);
    }
    }
    }
    return 0;
}
