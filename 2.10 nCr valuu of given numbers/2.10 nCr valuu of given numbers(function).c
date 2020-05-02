#include<stdio.h>
int fact(int t)
{
  int i=1;
  while(t!=0)
  {
      i=i*t;
      t--;
  }
  return i;
}

int main()
{
    int n,r;
    printf("Enter the value of 'n' & 'r' to get nCr\n");
    scanf("%d%d",&n,&r);
    printf("\n\t%dC%d=%d",n,r,fact(n)/(fact(r)*fact(n-r)));

    return 0;
}
