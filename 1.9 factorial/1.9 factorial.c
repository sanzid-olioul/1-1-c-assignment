#include<stdio.h>
int main()
{
    int fact=1,sum;
    int num,i;
    printf("Enter a number to get get its factorial\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d = %d",num,fact);

    return 0;
}
