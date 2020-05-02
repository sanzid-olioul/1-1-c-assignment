#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number to count digits : ");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("The number contains %d digits",count);

    return 0;
}

