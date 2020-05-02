#include<stdio.h>

int main()
{
    float length,width,area;

    printf("Enter the Length and width of rectangle : ");

    scanf("%f%f",&length,&width);

    area=length*width;

    printf("Area=%f\n",area);

    return 0;

}
