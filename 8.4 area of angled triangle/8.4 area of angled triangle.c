#include<stdio.h>
int main()
{
    float h,b,area;

    printf("Enter the height : ");

    scanf("%f",&h);

    printf("Enter the Base : ");

    scanf("%f",&b);

    area=(h*b)/2;

    printf("Area= %.2f",area);

    return 0;
}
