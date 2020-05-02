#include<stdio.h>
int main()
{
    float p,q,area;

    printf("Enter the two diagonal of the rhombus : ");

    scanf("%f %f",&p,&q);

    area=.5*p*q;

    printf("The area of rhombus = %.2f\n",area);

    return 0;
}
