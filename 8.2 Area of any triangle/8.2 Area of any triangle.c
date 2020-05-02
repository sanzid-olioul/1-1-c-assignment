#include<stdio.h>
int main()
{
    float base,hight,Area;

    printf("Enter the base :");
    scanf("%f",&base);

    printf("Enter the hight :");

    scanf("%f",&hight);

    Area=0.5*base*hight;

    printf("Area of triangle =%.2f",Area);

    return 0;


}
