#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[100]={'\0'},arr2[100]={'\0'},tem;
    int l1,l2,i;
    printf("Enter the first string:\n");
    gets(arr1);
    printf("Enter the second string:\n");
    gets(arr2);
    l1=strlen(arr1);
    l2=strlen(arr2);
    for(i=0;i<l1 || i<l2 ;i++)
    {
        tem=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=tem;
    }
    printf("The swapping value of first string : ");
    printf(arr1);
    printf("\nThe swapping value of second string : ");
    printf(arr2);
    return 0;
}
