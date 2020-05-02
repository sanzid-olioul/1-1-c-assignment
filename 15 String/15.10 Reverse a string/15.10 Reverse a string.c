#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0;
    gets(str);
    int l=strlen(str)-1;
    while(i<=l)
    {
      int tem=str[i];
      str[i]=str[l];
      str[l]=tem;
        i++;
        l--;
    }
    printf(str);
    return 0;
}
