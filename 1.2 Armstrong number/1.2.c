#include<bits/stdc++.h>
int main()
{
	int a;
	scanf("%d",&a);
	while(a--){
    int num,sum=0,remain,i,x;
    int loop=0,dev;
    int mul=1,j;
    scanf("%d",&num);
    i=num;
    dev=i;
    while(dev>0)
    {
        dev=dev/10;
        loop=loop+1;
    }
    while(num>=1)
    {
        remain=num%10;
        for(j=1;j<=loop;j++)
        {
            mul=mul*remain;
        }
        sum=sum+mul;
        num=num/10;
        mul=1;
    }
    if(i==sum)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
}
return 0;
}
