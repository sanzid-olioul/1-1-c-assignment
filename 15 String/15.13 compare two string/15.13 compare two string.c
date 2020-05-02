#include<stdio.h>
#include<string.h>
int main()
{
   int i,count=5,l1,l2;
   char arr1[100],arr2[100];
   gets(arr1);
   gets(arr2);

   l1=strlen(arr1);
   l2=strlen(arr2);
   if(l1==l2)
   {
       for(i=0;i<l1;i++)
   {
       if(arr2[i]==arr1[i])
       {
           count = 1;
       }
       else
       {
           count =5;
       }
   }
   }
   if(count==1)
   {
     printf("The strings are same");
   }
   else
   {
       printf("The strings are not same");
   }
    return 0;
}
