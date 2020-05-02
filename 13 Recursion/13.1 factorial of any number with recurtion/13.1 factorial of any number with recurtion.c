#include<stdio.h>
int fact(int number)
{
    if(number>=1)
    {
        return number*fact(number-1);
    }
    else
    {
        return 1;
    }
}
int main()
{

    int num;
    printf("Enter a number to get it's factorial:");
    scanf("%d",&num);
    printf("Factorial of\t %d!=%d",num,fact(num));
    return 0;
}
