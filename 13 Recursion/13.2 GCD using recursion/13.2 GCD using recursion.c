#include<stdio.h>
int gcd(int first_num, int second_number,int i)
{
    static int g=1;
    if(first_num%i==0 && second_number%i==0)
    {
        g=i;
    }
    if(i<=first_num && i<=second_number)
    {
        gcd(first_num, second_number,i+1);
    }
    else
    {
        return g;
    }
}
int main()
{
  int num1,num2;
  printf("Enter two number to get GCD");
  scanf("%d%d",&num1,&num2);
  printf("GCD of %d & %d = %d",num1,num2,gcd(num1,num2,1));
    return 0;
}
