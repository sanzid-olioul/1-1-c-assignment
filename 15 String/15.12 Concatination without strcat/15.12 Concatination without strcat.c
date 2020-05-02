#include<stdio.h>
#include<string.h>
int main()
{
   int i,l,l1,l2;
   char arr1[100]={'\0'},arr2[100]={'\0'};
   gets(arr1);
   gets(arr2);

   l1=strlen(arr1);
   l2=strlen(arr2);
   i=l1;
    while(i<(l1+l2))
   {
       arr1[i]=arr2[i-l1];
       i++;
   }
   printf(arr1);
    return 0;
}
