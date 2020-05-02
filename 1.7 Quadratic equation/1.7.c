#include <stdio.h>
#include <math.h>
int main()
{
double a,b,c,d,X1,X2;
printf("Enter the three parameter a,b,c of aX^2 + bX+c=0\n");
scanf("%lf%lf%lf",&a,&b,&c);
d=b*b-4*a*c;
if(d>=0)
{
 d=sqrt(d);
 X1=(-b+d)/(2*a);
X2=(-b-d)/(2*a);
printf("X1=%.2lf \nX2=%.2lf",X1,X2);

}
else
{
   printf("Impossible calculation");
}
    return 0;
}
