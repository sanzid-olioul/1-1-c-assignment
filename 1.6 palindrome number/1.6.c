#include<stdio.h>
int main()
{
    int num,remain,reverse=0,num1;
    printf("Enter a number to check Whether the number is palindrome or not");
    scanf("%d",&num);
    num1=num;
    while(num>0)
    {
        remain=num%10;
        reverse=reverse*10+remain;
        num=num/10;
    }
   if(num1==reverse)
   {
       printf("The number is palindrome");
   }
   else
    {
        printf("The number is not palindrome");
    }
    return 0;
}

