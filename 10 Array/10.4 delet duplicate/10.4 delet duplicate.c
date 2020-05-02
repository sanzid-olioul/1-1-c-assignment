#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the element number of array");
    scanf("%d",&n);
    int a[100]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; )
        {
            if(a[j] == a[i])
            {
                for(k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}
