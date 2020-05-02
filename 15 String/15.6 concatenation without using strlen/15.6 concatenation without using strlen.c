#include<stdio.h>
int main()
{
   int i,l,l1=0,l2=0;
   char arr1[200]={'\0'},arr2[100]={'\0'};
   gets(arr1);
   gets(arr2);
   while(arr1[l1]!='\0')
   {
       l1++;
   }
   while(arr2[l2]!='\0')
   {
       l2++;
   }

       for(i=l1;i<(l1+l2);i++)
   {
       arr1[i]=arr2[i-l1];
   }

   printf(arr1);
    return 0;
}

