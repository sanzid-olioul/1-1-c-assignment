#include<stdio.h>
int main()
{
   int num,rev=0,tem,num1;
    printf("Enter a number to convert digits into word\n");
    scanf("%d",&num);
    num1=num;
    while(num1!=0)
    {
        tem=num1%10;
        rev=rev*10+tem;
        num1=num1/10;
    }
    printf("The digits are :");
    while(rev!=0)
    {
        tem=rev%10;
        rev=rev/10;
         printf("%d=",tem);
        switch(tem)
        {

            case 1:
            {
                printf("One,\t");
                break;
            }
            case 2:
            {
                printf("Two,\t");
                break;
            }
            case 3:
            {
                printf("Three,\t");
                break;
            }
            case 4:
            {
                printf("Four,\t");
                break;
            }
            case 5:
            {
                printf("Five,\t");
                break;
            }
            case 6:
            {
                printf("Six,\t");
                break;
            }
            case 7:
            {
                printf("Seven,\t");
                break;
            }
            case 8:
            {
                printf("Eight,\t");
                break;
            }
            case 9:
            {
                printf("Nine,\t");
                break;
            }
            default:

            {
                printf("Zero,\t");

            }

        }

    }

    return 0;
}
