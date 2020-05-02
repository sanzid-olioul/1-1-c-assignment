#include<stdio.h>
#include<string.h>
char rev(char arr[],int i,int l)
{

  if(i>=l)
  {
      printf(arr);
  }
  else
  {
      int tem=arr[i];
      arr[i]=arr[l];
      arr[l]=tem;

     rev(arr,i+1,l-1);
  }
}
int main()
{
    char str[100];
    gets(str);
    rev(str,0,strlen(str)-1);
    return 0;
}
