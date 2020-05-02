#include<stdio.h>
int main()
{
    int num1,num2,tem;
    printf("Enter the value of mun1:");
    scanf("%d",&num1);
     printf("Enter the value of mun2:");
    scanf("%d",&num2);
    tem=num1;
    num1=num2;
    num2=tem;
     printf("the swapping value of nun1=%d\n",num1);
     printf("the swapping value of nun2=%d\n",num2);

    return 0;
}
