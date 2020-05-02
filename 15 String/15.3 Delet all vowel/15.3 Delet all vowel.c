#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,n;
    char arr1[100];
    gets(arr1);
    l=strlen(arr1);
    for(i=0;i<l;i++)
    {
        if(arr1[i]!='A' && arr1[i]!='a' && arr1[i]!='E' && arr1[i]!='e' && arr1[i]!='I' && arr1[i]!='i' && arr1[i]!='O' && arr1[i]!='o' && arr1[i]!='U' && arr1[i]!='u')
        {
        for(j=i;j<l;j++)
            {
                arr1[j]=arr1[j+1];
            }
            i=-1;
            l--;
        }
    }
    printf(arr1);
    return 0;
}
