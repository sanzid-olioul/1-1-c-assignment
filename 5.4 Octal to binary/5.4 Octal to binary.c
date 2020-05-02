#include<stdio.h>
int main()
{
    int num,rev=0,tem,num1,i,j;
    int arr1[20];
    printf("Enter a Octal number\n");
    scanf("%o",&num);
    num1=num;
    i=0;
    while(num1!=0)
    {
        tem=num1%8;
        arr1[i]=tem;
        num1=num1/8;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        tem=arr1[j];
        switch(tem)
        {
            case 1:
            {
                printf("001");
                break;
            }
            case 2:
            {
                printf("010");
                break;
            }
            case 3:
            {
                printf("011");
                break;
            }
            case 4:
            {
                printf("100");
                break;
            }
            case 5:
            {
                printf("101");
                break;
            }
            case 6:
            {
                printf("110");
                break;
            }
            case 7:
            {
                printf("111");
                break;
            }
            default:
            {
                printf("000");
            }


        }

    }
    return 0;
}
