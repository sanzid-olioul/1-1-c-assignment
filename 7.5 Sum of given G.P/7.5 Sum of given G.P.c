#include<stdio.h>
#include<math.h>
int main()
{
    float num1,num2,num3,ratio,n,last,sum,i,j;
    san:
        {
    printf("Enter first three number of the series\n");
    scanf("%f%f%f",&num1,&num2,&num3);
    i=num2/num1;
    j=num3/num2;
    if(i==j)
    {
        printf("Enter the value of number of terms you want to sum : ");
        scanf("%f",&n);
        ratio=num2/num1;
        last=num1*pow(ratio,n-1);
        if(ratio<1)
        {
            sum=num1*(1-pow(ratio,n))/(1-ratio);
        }
        else
        {
            sum=num1*(pow(ratio,n)-1)/(ratio-1);
        }
    printf("The sum of %.2f + %.2f + %.2f +...+%.2f =%.2f \t",num1,num2,num3,last,sum);
    }
    else
    {
        printf("You have entered a wrong series\n");
        goto san;
    }
    }
    return 0;
}
