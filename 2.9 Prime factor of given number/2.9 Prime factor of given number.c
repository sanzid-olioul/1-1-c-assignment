#include<stdio.h>
int main()
{
    int num,tem,i;
    printf("Enter a number to get prime factor\n");
    scanf("%d",&num);
    printf("The prime factors of %d are :",num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            tem=num/i;
            num=tem;
            printf(" %d",i);
            i=1;
        }
    }
    return 0;
}
