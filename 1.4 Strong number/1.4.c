//To check strong number;
//Strong number are 2,145;
#include<stdio.h>
int main()
{
    int num,sum=0,remain,i,c,fact=1;
    printf("Enter a number to know if the number is Strong or not");
    scanf("%d",&num);
    i=num;
    while(num>0)
    {
        remain=num%10;


         for (c = 1; c <= remain; c++)
            {
               fact = fact * c;
         }
        sum=sum+fact;
        num=num/10;
        fact=1;
    }
    if(i==sum)
    {
        printf("The number is Strong number");
    }
    else
    {
        printf("The number is not a Strong number");
    }
    return 0;
}
