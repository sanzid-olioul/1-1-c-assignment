#include<stdio.h>
int main()
{
    int num1,i,j,tem,point,k,l;
    float num,num2;
    int bin[25];
    int poi[25];
    printf("Enter a decimal number");
    scanf("%f",&num);
    num1=num;
    num2=(num-num1)*100;
    i=0;
    while(num1!=0)
    {
        tem=num1%2;
        bin[i]=tem;
        num1=num1/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }
    printf(".");
    point=num2;
    k=0;
    while(point!=0)
    {
        tem=point%2;
        poi[k]=tem;
        point=point/2;
        k++;
    }

    for(l=0;l<k;l++)
    {
    printf("%d",poi[l]);
    }

    return 0;
}
