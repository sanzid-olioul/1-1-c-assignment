#include<stdio.h>
#include<math.h>
int main()
{
    float r,h,v,sur,pi=3.1416;
    printf("Enter the radius and hight of a cone : ");
    scanf("%f%f",&r,&h);
    v=pi*r*r*h/3;
    sur=pi*r*(r+sqrt(r*r+h*h));
    printf("volume of the cone = %.2f\n",v);
    printf("surface area of the cone = %.2f\n",sur);
    return 0;
}
