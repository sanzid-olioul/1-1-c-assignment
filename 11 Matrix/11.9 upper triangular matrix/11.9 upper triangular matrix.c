#include<stdio.h>
int main()
{
  int arr1[10][10];
  int i,j,sum=0;
  int r1,c1,n;
  mat:
  printf("Enter the order of the matrix:\n");
  scanf("%d%d",&r1,&c1);
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
        printf("|");
        for(j=0;j<c1;j++)
            {
                if(i<=j)
                {
                  printf(" %d ",arr1[i][j]);
                }
                else
                {
                    printf(" 0 ");
                }

            }
             printf("|");
            printf("\n");
      }

    return 0;
}
