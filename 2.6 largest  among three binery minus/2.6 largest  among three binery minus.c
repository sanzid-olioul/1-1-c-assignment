#include<stdio.h>
int main()
{
    int num1, num2,num3,large;
    printf("Enter three number to get the larger one\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1-num2)>0 && (num1-num3)>0)
    {
        printf("%d is the largest number\n",num1);
    }
    else if((num2-num3)>0)
    {
        printf("%d is the largest number\n",num2);
    }
    else
    {
        printf("%d is the largest number\n",num3);
    }
    return 0;
}
