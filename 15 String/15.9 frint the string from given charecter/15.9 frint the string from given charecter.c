#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],tem;
    int i,j;
    printf("Enter the string:\n");
    gets(str);
    printf("Enter the character:\n");
    scanf("%c",&tem);
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
      if(tem==str[i])
      {
          for(j=i;j<l;j++)
          {
            printf("%c",str[j]);
          }
          break;
      }
    }
    return 0;
}
