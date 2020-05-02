#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j;
    printf("Enter the string:\n");
    gets(str);
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
      if(i==0 || str[i-1]==' ')
      {
            printf("%c",str[i]);
      }
    }
    return 0;
}
