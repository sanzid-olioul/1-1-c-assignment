#include<stdio.h>
int power_of_number(int num,int count)
{
    if(count==0)
    return 1;
    else
    return num*power_of_number(num,count-1);
}
int main()
{
    int num,p;
    scanf("%d%d",&num,&p);
    printf("%d",power_of_number(num,p));
    return 0;
}
