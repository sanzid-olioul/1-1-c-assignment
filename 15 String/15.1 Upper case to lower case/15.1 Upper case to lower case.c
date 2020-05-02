#include<stdio.h>
#include<string.h>
int main()
{
   int i,l;
   char arr1[50];
   printf("Enter the string:\n");
   gets(arr1);
   l=strlen(arr1);
   printf("The Lower case:\n");
   for(i=0;i<l;i++)
   {
       printf("%c",tolower(arr1[i]));
   }

    return 0;
}
