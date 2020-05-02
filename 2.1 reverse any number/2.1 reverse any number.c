#include<stdio.h>
int main()
{
    int num, rev=0,tem;
    printf("enter any number to reverse it\n");
    scanf("%d",&num);
    while(num!=0)
    {
        tem=num%10;
        rev=rev*10+tem;
        num=num/10;
    }

    printf("The reverse of the number is =%d",rev);





    return 0;
}
