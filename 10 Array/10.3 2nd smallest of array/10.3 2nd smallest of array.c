#include<stdio.h>
int main()
{
    int arr[50],num,i,num2,n;
    printf("Enter elements number of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    num=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<num)
        {
            num=arr[i];
        }
    }
    num2=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i] < num2 && arr[i] > num)
        {
            num2=arr[i];
        }
    }
    printf("The 2nd smallest number of the array is =%d",num2);
    return 0;
}
