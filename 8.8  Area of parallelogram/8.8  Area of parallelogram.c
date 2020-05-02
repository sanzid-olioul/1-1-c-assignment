#include<stdio.h>
int main()
{
    float b,h,area;

    printf("Enter the base and hight of parallelogram : ");

    scanf("%f %f",&b,&h);

    area=b*h;

    printf("Area of parallelogram = %.2f",area);

    return 0;
}
