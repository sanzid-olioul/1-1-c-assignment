#include<stdio.h>
int main()
{
    int num=1;
    number:
        {
            printf("%d ",num);
            num++;
        }
    if(num<=100)
    {
        goto number;
    }
    return 0;
}
