#include<stdio.h>
int main()
{
    int num,rev=0,tem,num1;
    printf("Enter a number to split into digits\n");
    scanf("%d",&num);
    num1=num;
    while(num1!=0)
    {
        tem=num1%10;
        rev=rev*10+tem;
        num1=num1/10;
    }
    printf("The digits are :");
    while(rev!=0)
    {
        tem=rev%10;
        rev=rev/10;
        printf("%d ",tem);
    }
    return 0;
}
