#include<stdio.h>
#include<math.h>
int main()
{
    int num,num1,i,j,k;
    double sum,digit=0,tem;
    scanf("%d",&num);
    num1=num;
    while(num1!=0)
    {
        num1=num1/10;
        digit++;


    }
     num1=num;
    while(num1!=0)
    {
        tem=num1%10;
        tem=pow(tem,digit);
        sum=sum+tem;
        num1=num1/10;
    }
    if(num==sum)
    {
        printf("The number is armstron");

    }

    else
    {
        printf("The number is not armstron");
    }
    return 0;
}
