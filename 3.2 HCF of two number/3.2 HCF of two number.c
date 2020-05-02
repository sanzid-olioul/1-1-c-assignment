#include<stdio.h>
int main()
{
    int num1,num2,HCF,i;
    printf("Enter two number to get HCF\n");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            HCF=i;
        }
    }
    printf("The HCF of %d & %d is =%d",num1,num2,HCF);
    return 0;
}
