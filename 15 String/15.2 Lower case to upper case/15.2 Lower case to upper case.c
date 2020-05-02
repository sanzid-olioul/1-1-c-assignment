#include<stdio.h>
int main()
{
    int i,l;
   char arr1[50];
   printf("Enter the string:\n");
   gets(arr1);
   l=strlen(arr1);
   printf("The lower case:\n");
   for(i=0;i<l;i++)
   {
       printf("%c",toupper(arr1[i]));
   }

    return 0;
}

