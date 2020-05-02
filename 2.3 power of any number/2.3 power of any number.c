#include<stdio.h>

int main()
{
    int base, exp, result = 1;
    int i = 1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    while(i <= exp)
    {
        result = result * base;
        i++;
    }

    printf("%d^%d = %d", base, exp, result);

    return 0;
}
