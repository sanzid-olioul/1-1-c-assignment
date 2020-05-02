#include<stdio.h>
int main()
{
    int i,n,s;
    int arr[100];
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter a array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter what you want to search:");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            printf("%d is on the %d position",s,i+1);
            i--;
            break;
        }
    }
    if(i==n)
    {
        printf("%d isn't found on array",s);
    }
    return 0;
}
