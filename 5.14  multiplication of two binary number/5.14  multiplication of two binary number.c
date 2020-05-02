#include<stdio.h>
int main()
{
    int num,i,j,tem;
    int num1,num2;
    int bin[25];
    printf("Enter first binary number");
    scanf("%d",&num1);
    printf("Enter second binary number");
    scanf("%d",&num2);
    num=num1*num2;
    i=0;
    while(num!=0)
    {
        tem=num%2;
        bin[i]=tem;
        num=num/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }

    return 0;
}
