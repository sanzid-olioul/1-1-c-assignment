#include<stdio.h>
int main()
{
    int arr[27]={0};
    char str[100];
    printf("Enter a string");
    gets(str);
    int c;
    for(int i=0;str[i]!='\0';i++)
    {
        c=str[i]-97;
        arr[c]++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]>0)
        {
            printf("The %c has %d times\n",i+97,arr[i]);
        }
    }
    return 0;
}
