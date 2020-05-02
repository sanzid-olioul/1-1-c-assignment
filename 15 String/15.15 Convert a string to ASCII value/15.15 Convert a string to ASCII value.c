#include<stdio.h>
int main()
{
   int i,j,l;
   char arr[100];
   gets(arr);
   l=strlen(arr);
   for(i=0;i<l;i++)
   {
       printf("%c ASCII =%d\n",arr[i],arr[i]);
   }
    return 0;
}
