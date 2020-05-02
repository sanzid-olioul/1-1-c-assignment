#include<stdio.h>
int main()
{
    float v,s,r,pi=3.1416;
    printf("Enter the radius of the sphere : ");
    scanf("%f",&r);
    v=(4*pi*r*r*r)/3;
    s=(4*pi*r*r);
    printf("volume of the sphere =%.2f\n",v);
    printf("surface area of the sphere =%.2f\n",s);
    return 0;
}
