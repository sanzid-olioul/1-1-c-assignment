#include<stdio.h>
int main()
{
    float area,r,pi=3.1416;

    printf("Enter the redius: ");

    scanf("%f",&r);

    area=pi*r*r;

    printf("Area of circle=%.3f",area);

    return 0;
}
