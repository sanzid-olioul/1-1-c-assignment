#include<stdio.h>
int main()
{
    float circle,rec,tri,a,b,c,r,l,w,pi=3.1416;

    printf("Enter the radius of a circle: ");

    scanf("%f",&r);

    circle=2*pi*r;

    printf("Enter hight and width of the rectangle: ");

    scanf("%f %f",&l,&w);

    rec =2*(l+w);

    printf("Enter three arm of triangle: ");

    scanf("%f %f %f",&a,&b,&c);

    tri=a+b+c;;

    printf("perimeter of circle=%.2f\n",circle);

    printf("perimeter of rectangle=%.2f\n",rec);

    printf("perimeter of triangle=%.2f\n",tri);

    return 0;
}
