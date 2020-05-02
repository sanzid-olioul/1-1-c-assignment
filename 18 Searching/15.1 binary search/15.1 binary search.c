#include<stdio.h>
int main()
{
   int i,l,f,m;
   int arr[100];
   int n,s;
   printf("Enter the elements number of array");
   scanf("%d",&n);
   l=n-1;
   f=0;
   m=(l+f)/2;
   printf("Enter a short data");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter what you want to search");
    scanf("%d",&s);

    while(f<=l)
    {
        if(arr[m]==s)
        {
            printf("%d is on the %d position",s,m+1);
            break;
        }
        else if(arr[m]<s)
        {
            f=m+1;
            m=(f+l)/2;
        }
        else
        {
            l=m-1;
            m=(l+f);
        }
    }
    if(f>l)
    {
        printf("The elements isn't on array");
    }

    return 0;
}
