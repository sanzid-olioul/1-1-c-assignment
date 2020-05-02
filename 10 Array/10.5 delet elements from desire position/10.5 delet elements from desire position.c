#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the element number of array");
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p;
    printf("Enter a the position you want to delete:");
    scanf("%d",&p);
     for(i=p-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    --n;
for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
return 0;
}
