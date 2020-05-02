#include<stdio.h>
int main()
{
    int num,i,j,tem;
    int bin[25];
    printf("Enter a decimal number");
    scanf("%d",&num);
    i=0;
    while(num!=0)
    {
        tem=num%2;
        bin[i]=tem;
        num=num/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }

    return 0;
}
