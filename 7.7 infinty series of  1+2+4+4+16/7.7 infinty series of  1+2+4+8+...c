#include<stdio.h>
int main()
{
    double i;
    printf("The infinity series\n");
    for(i=1;i>0;i=i+i)
    {
        printf("%.0lf+",i);
    }
    return 0;
}
