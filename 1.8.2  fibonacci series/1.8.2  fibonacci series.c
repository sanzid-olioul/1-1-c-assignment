#include<stdio.h>
int main()
{
    int n,count,n1,n2,fibo;
    printf("Enter the term of number you want to show fibonacci series : ");
    scanf("%d",&n);
    count=0;
    n1=0;
    n2=1;
    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
           fibo=n1+n2;
           n1=n2;
           n2=fibo;

        }
            printf("%d ",fibo);

    count++;

    }


    return 0;
}
