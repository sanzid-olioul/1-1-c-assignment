#include<stdio.h>

int fact(int n)
{
    if(n==1)
    {
        return 1;

    }
    else
    {
       return n*fact(n-1);

    }


}

int main()
{
    int num;
    printf("Enter a number to get its factorial\n");
    scanf("%d",&num);
    int resust = fact(num);
    printf("The factorial of %d is =%d",num,resust);

    return 0;
}
