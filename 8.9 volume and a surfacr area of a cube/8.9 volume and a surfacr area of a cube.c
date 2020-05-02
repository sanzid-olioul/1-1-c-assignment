#include<stdio.h>
#include<math.h>
int main()
{

    float v,s,volume,surface;
    printf("Enter one arm of the cube : ");
    scanf("%f",&s);
    volume=s*s*s;
    surface=6*s*s;

    printf("volume of the cube = %.2f\n",volume);
    printf("surface area of the cube = %.2f\n",surface);
    return 0;
}
