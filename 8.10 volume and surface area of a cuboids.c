#include<stdio.h>
int main()
{
    float volume,surface,l,w,h;
    printf("Enter the length , width & hight of a cuboid : ");
    scanf("%f %f %f",&l,&w,&h);
    volume=l*w*h;
    surface=2*l*w+2*h*l+2*h*w;
    printf("volume of the cuboid : %f\n",volume);
    printf("surface area of the cuboid : %f\n",surface);
    return 0;
}
