#include<stdio.h>
int main()
{
    int row,nCr,n,r,space;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    for(n=0;n<row;n++)
    {
        for(space=1;space<row-n;space++)
        {
            printf(" ");
        }
        for(r=0;r<=n;r++)
        {
            if(r==0)
            {
                nCr=1;
            }
            else
            {
                nCr=nCr*(n-r+1)/r;
            }
            printf("%d ",nCr);
        }
        printf("\n");

    }

    return 0;
}
