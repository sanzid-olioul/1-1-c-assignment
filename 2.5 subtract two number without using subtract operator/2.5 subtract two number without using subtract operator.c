#include<stdio.h>
int main()
{
    int num1, num2,com,carry;
    printf("Enter two number to subtract");
    scanf("%d%d",&num1,&num2);
    com= ~num2;
    com= com+1;
    while(com!=0)
    {
       carry= num1 & com;
       num1= num1 ^ com;
       com = carry<<1;

    }
    printf("Result = %d",num1);


    return 0;
}
