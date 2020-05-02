//To check the number odd or even;
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check whether the number is odd or even");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }



    return 0;
}
