#include<stdio.h>
int main()
{
    int arr[500],num,i,j,n;
    printf("Enter elements number of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    num=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>num)
        {
            num=arr[i];
        }
    }
    printf("The largest number of the array is =%d",num);
    return 0;
}
