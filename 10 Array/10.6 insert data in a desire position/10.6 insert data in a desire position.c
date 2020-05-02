#include<stdio.h>
int main()
{
    int arr[100]={'\0'};
    int inp,position,num;
    printf("How many data do you want to insert:");
    scanf("%d",&num);
    for(inp=0;inp<num;inp++)
    {
    printf("Enter the position where you want to insert data :");
    scanf("%d",&position);
    printf("Enter the data :");
    scanf("%d",&arr[position-1]);
    }
    for(int i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
