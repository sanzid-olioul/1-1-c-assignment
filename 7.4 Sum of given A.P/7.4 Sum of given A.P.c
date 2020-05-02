#include<stdio.h>
int main()
{
    int num1,num2,num3,dif,n,sum,last;
    san:
        {
    printf("Enter first three number of the series\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num2-num1)==(num3-num2))
    {
        printf("Enter the value of number of terms you want to sum : ");
        scanf("%d",&n);
        dif=num2-num1;
        last=num1+(n-1)*dif;
        sum=n*(num1+last)/2;
        printf("The sum of %d + %d + %d +...+%d =%d \t",num1,num2,num3,last,sum);
    }
    else
    {
        printf("You have entered a wrong series\n");
        goto san;
    }
    }
    return 0;
}
