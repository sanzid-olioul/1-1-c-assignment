#include<stdio.h>
int main()
{
   int i,j,l;
   char arr1[100],arr2[100]={'\0'};
   gets(arr1);
   l=strlen(arr1);
   for(i=0;i<l;i++)
   {
       arr2[i]=arr1[i];
   }
    printf(arr2);
    return 0;
}
