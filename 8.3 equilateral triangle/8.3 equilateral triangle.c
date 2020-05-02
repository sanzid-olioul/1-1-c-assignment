#include<stdio.h>
#include<math.h>
int main()
{
    double side,area;

    printf("Enter the side");

    scanf("%lf",&side);
    area= (sqrt(3)/4)*side*side;

    printf("Area= %.2lf",area);

    return 0;
}
