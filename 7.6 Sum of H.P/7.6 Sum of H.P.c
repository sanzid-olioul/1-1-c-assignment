#include<stdio.h>
int main()
{
    float num1,num2,num3,dif,n,sum,last,i;
    float num,DIF;
    san:
        {
    printf("Enter first three denominator number of the series\n");
    printf("1/");
    scanf("%f",&num1);
    printf("1/");
    scanf("%f",&num2);
    printf("1/");
    scanf("%f",&num3);
    if((num2-num1)==(num3-num2))
    {
        printf("Enter the value of number of terms you want to sum : ");
        scanf("%f",&n);
        dif=num2-num1;
        last=num1+(n-1)*dif;
        sum=0;
        for(i=1;i<=n;i++)
        {
        DIF=(i-1)*dif;
        num=1/(num1+DIF);
        sum=sum+num;
        }
        printf("The sum of 1/%.2f + 1/%.2f + 1/%.2f +...+1/%.2f =%f \t",num1,num2,num3,last,sum);
    }
    else
    {
        printf("You have entered a wrong series\n");
        goto san;
    }
    }
    return 0;
}
