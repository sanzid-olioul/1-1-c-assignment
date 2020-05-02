#include<stdio.h>
int main()
{
    int arr1[50]={0},arr2[50]={0},tem;
    int n1,n2,i;
    printf("Enter the elements number in array 1 and array 2:\n");
    scanf("%d %d",&n1,&n2);
    printf("Enter the elements of first array:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
     printf("Enter the elements of second array:\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n1 || i<n2 ;i++)
    {
        tem=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=tem;
    }
    printf("The swapping value of first array : ");
    for(i=0;i<n2;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nThe swapping value of second array : ");
    for(i=0;i<n1;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
