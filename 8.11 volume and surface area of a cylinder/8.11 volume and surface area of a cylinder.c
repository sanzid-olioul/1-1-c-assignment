#include<stdio.h>
int main()
{
    float r,h,pi=3.1416,s,v;

    printf("Enter the radius  and hight of a cylinder : ");

    scanf("%f %f",&r,&h);

    v=(pi*r*r*h);

    s=(2*pi*r*r+2*pi*r*h);

    printf("volume of the cylinder = %.2f\n",v);

    printf("surface area of the cylinder = %.2f\n",s);

    return 0;
}
