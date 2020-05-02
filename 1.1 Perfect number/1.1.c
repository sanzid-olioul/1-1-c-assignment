//perfect number check
//inputs are 6,28,496,8128;
#include<stdio.h>
int main()
{
    long long int i,j=0,num;
    printf("Enter a number to check the given number is perfect or not");
    scanf("%lld",&num);
    for(i=1;i<=(num/2);i++)
    {
        if(num%i==0)
            {
                j=j+i;
            }

    }
        if(num==j)
        {
            printf("The number is perfect");
        }
    else
       {
            printf("The number is not perfect");
    }

    return 0;
}
