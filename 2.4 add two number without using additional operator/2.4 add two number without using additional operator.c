#include<stdio.h>
int main()
{
    int num1,num2,carry;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);
    while(num2!=0)
    {
        carry= num1 & num2;
        num1= num1 ^ num2;
        num2= carry<<1;
    }


    printf("%d",num1);
    return 0;
}
