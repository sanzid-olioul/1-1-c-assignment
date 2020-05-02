#include<stdio.h>
int main()
{
  int num1,num2,GCD,i;
    printf("Enter two number to get GCD\n");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            GCD=i;
        }
    }
    printf("The GCD of %d & %d is =%d",num1,num2,GCD);

    return 0;
}
