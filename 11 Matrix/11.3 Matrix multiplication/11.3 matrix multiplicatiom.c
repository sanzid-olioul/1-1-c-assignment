#include<stdio.h>
int main()
{
  int arr1[10][10],arr2[10][10],arr3[10][10];
  int i,j,k,sum=0;
  int r1,r2,c1,c2;
  mat:
  printf("Enter the order of first matrix:\n");
  scanf("%d%d",&r1,&c1);
  printf("Enter the order of second matrix:\n");
  scanf("%d%d",&r2,&c2);
  if(r1==c2 && r2==c1)
  {
  printf("\aEnter the %d elements of 1st array\n",r1*c1);
  for(i=0;i<r1;i++)
  {
      for(j=0;j<c1;j++)
      {
          scanf("%d",&arr1[i][j]);
      }
  }

    printf("\aEnter the %d elements of 2nd array\n",r2*c2);
      for(i=0;i<r2;i++)
  {
      for(j=0;j<c2;j++)
      {
          scanf("%d",&arr2[i][j]);
      }
  }
      for(i=0;i<r1;i++)
  {
      for(j=0;j<c1;j++)
      {
          sum=0;
        for(k=0;k<c2;k++)
        {
        sum = sum +  arr1[i][k]*arr2[k][j];
        }
        arr3[i][j]=sum;
      }
  }
     for(i=0;i<r1;i++)
  {
      printf("|");
      for(j=0;j<c1;j++)
      {
          printf(" %d ",arr3[i][j]);
      }
      printf("|");
      printf("\n");
  }
  }
  else
  {
      printf("\awrong input.");
      goto mat;
  }
    return 0;

}
