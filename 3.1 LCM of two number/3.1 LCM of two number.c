#include<stdio.h>
int main()
{
  int num1,num2,LCM,i,GCD;
    printf("Enter two number to get LCM\n");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            GCD=i;
        }
    }
    LCM=(num1*num2)/GCD;
    printf("The LCM of %d & %d is=%d",num1,num2,LCM);

    return 0;
}
