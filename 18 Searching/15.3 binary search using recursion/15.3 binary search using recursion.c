#include<stdio.h>
int search(int arr[],int s,int l,int f,int m,int i)
{
    if(arr[m]==s)
    {
        return m+1;
    }
    else if(arr[m]<s)
        {
            search(arr,s,l,m+1,(l+f)/2,i+1);
        }
        else
        {
          search(arr,s,m+1,f,(l+f)/2,i+1);
        }
    if(i>l)
    {
        printf("%d isn't find on array");
    }
}
int main()
{
   int i;
   int arr[100];
   int n,s;
   printf("Enter the array number");
   scanf("%d",&n);
   printf("Enter a short data");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter what you want to search");
    scanf("%d",&s);
    printf("%d is on %d position",s,search(arr,s,n-1,0,(n-1)/2,0));
    return 0;
}
