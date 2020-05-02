#include<stdio.h>
int main()
{
    char *p,str[100];
    int count=0;
    printf("Enter a string:\n");
    gets(str);
    p=&str;
    while(*p!='\0')
    {
        p++;
        count++;
    }
    printf("%d",count);
    return 0;
}
