#include<stdio.h>
int main()
{
    int i,j;
    char tem;
    char arr[100];
    printf("Enter the string:\n");
   gets(arr);
    for(i=0;arr[i+1]!='\0';i++)
    {
        for(j=i+1;arr[j]!='\0';j++)
        {
            if(arr[i]>arr[j])
            {
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }

        for(i=0;arr[i]!='\0';i++)
        printf("%c ",arr[i]);

    return 0;
}
