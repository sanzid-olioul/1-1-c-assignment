#include<stdio.h>
int main()
{
    int i,j,tem=0,n;
    int arr[100];
    printf("Enter the element number of array");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }

        for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
