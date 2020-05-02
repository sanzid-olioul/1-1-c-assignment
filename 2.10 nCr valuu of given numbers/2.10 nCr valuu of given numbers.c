#include<stdio.h>
int main()
{
    int n,r,nCr,i;
    int n_fac=1,r_fac=1,n_r_fact=1;
    printf("Enter the value of 'n' & 'r' to get nCr\n");
    scanf("%d%d",&n,&r);
    for(i=1;i<=n;i++)
    {
        n_fac=n_fac*i;

    }
    for(i=1;i<=r;i++)
    {
        r_fac=r_fac*i;
    }

    for(i=1;i<=(n-r);i++)
    {
        n_r_fact=n_r_fact*i;
    }
    nCr=n_fac/(r_fac*n_r_fact);
    printf("%dC%d=%d",n,r,nCr);

    return 0;
}
