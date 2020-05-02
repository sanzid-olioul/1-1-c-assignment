#include<stdio.h>
int main()
{
    int row,i,j,k;
    printf("Enter the number of row of floyd's triangle : ");
    scanf("%d",&row);
    k=1;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }

    return 0;
}
