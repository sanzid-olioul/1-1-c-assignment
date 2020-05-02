#include<stdio.h>
int main()
{
    int arr[500],num1,num2,i,j,n;
    printf("Enter elements number of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    num1=arr[0];
    num2=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>num1)
        {
            num1=arr[i];
        }
        if(arr[i]<num2)
        {
            num2=arr[i];
        }

    }
    printf("The largest number of the array is =%d \n& The smallest number of the array is =%d",num1,num2);
    return 0;
}
