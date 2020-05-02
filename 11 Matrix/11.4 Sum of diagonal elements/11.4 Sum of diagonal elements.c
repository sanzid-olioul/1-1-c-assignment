#include<stdio.h>
int main()
{
  int arr1[10][10];
  int i,j,sum=0;
  int r1,c1;
  mat:
  printf("Enter the order of first matrix:\n");
  scanf("%d%d",&r1,&c1);
    if(r1==c1)
    {
  printf("\aEnter the %d elements of 1st array\n",r1*c1);
  for(i=0;i<r1;i++)
  {
      for(j=0;j<c1;j++)
      {
          scanf("%d",&arr1[i][j]);
      }
  }
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    {
        if(i==j)
        {
            sum=sum+arr1[i][j];
        }
      }

    }
printf("Sum of diagonal elements = %d",sum);
  }
  else
  {
      printf("You have entered a wrong input\n");
      goto mat;


  }

    return 0;
}
