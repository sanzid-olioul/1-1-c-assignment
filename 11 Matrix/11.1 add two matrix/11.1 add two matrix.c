#include<stdio.h>
int main()
{
   int mat1[10][10],mat2[10][10],sum[10][10];
   int i,j,k,n1,n2;
   printf("Enter the order of matrix:\n");
   scanf("%d%d",&n1,&n2);
   printf("Enter the entry of first matrix:\n");
   for(i=0;i<n1;i++)
   {
       for(j=0;j<n2;j++)
       {
           scanf("%d",&mat1[i][j]);
       }
   }

     printf("Enter the entry of second matrix:\n");
   for(i=0;i<n1;i++)
   {
       for(j=0;j<n2;j++)
       {
           scanf("%d",&mat2[i][j]);
       }
   }


    for(i=0;i<n1;i++)
   {
       for(j=0;j<n2;j++)
       {
          sum[i][j]=mat1[i][j]+mat2[i][j];

       }
   }

   printf("The sum is\n");
     for(i=0;i<n1;i++)
   {
       for(j=0;j<n2;j++)
       {
           printf("%d ",sum[i][j]);
       }
       printf("\n");
   }



    return 0;
}
