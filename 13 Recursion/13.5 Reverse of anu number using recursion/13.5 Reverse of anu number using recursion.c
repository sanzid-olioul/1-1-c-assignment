#include<stdio.h>
int reverse_of_number(int num)
{
    static int sum=0;
    sum=sum*10+num%10;
    if(num>9)
    reverse_of_number(num/10);
    return sum;
}
int main()
{
    int num,p;
    scanf("%d",&num);
    printf("%d",reverse_of_number(num));
    return 0;
}
