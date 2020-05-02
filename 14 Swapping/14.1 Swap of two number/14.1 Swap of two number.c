#include<stdio.h>
int main()
{
    int num1,num2,tem;
    printf("Enter the value of num1:");
    scanf("%d",&num1);
     printf("Enter the value of num2:");
    scanf("%d",&num2);
    tem=num1;
    num1=num2;
    num2=tem;
     printf("the swaping value of mun1=%d\n",num1);
     printf("the swaping value of mun2=%d\n",num2);

    return 0;
}
