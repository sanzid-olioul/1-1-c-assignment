#include<stdio.h>
int main()
{
    int num,i,sum=0,j;
    while(i=1)
    {
        printf("Enter a number to get it's table\n");
        scanf("%d",&num);
        printf("The table of %d is\n",num);
        for(j=1;j<=10;j++)
        {
            sum=num*j;
            printf("%d X %d = %d\n", num,j,sum);
        }


    }

    return 0;
}
