#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 1st number");
    scanf("%d",&num1);
    printf("Enter 2nd number");
    scanf("%d",&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("Swap 1st number is :%d\n",num1);
    printf("Swap 2nd number is :%d\n",num2);
    return 0;
}
