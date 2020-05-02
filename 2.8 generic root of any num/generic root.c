#include<stdio.h>
int main()
{
  int num,i,j,tem;
  int sum=0;
  scanf("%d",&num);
  san:
  while(num!=0)
  {

      tem=num%10;
      sum=sum+tem;
      num=num/10;
  }
    if(sum<10)
    {
        printf("Generic root is %d",sum);
    }
    else
    {
        num=sum;
        sum=0;
        goto san;
    }










    return 0;
}
