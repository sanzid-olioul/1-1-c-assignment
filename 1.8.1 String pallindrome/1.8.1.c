#include<stdio.h>
int main()
{
    char str1[35];
    char str2[35];
    int num,i,j,com;
    printf("Enter any string\n");
    scanf("%s",&str1);
    num=strlen(str1);
    for(i=num-1,j=0;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    com=strcmp(str1,str2);
    if(com==0)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
    return 0;
}
