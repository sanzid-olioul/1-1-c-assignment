#include<stdio.h>//06
int main()
{
    float a,b,h,area,sum;
    printf("Enter the length of parallel sides & the distance of parallel sides : ");
    scanf("%f %f %f",&a,&b,&h);
    sum=a+b;
    area=0.5*sum*h;
    printf("Area of trapezium =%.2f\n",area);
    return 0;
}
