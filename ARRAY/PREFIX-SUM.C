#include<stdio.h>
int main()
{
    int arr[6]={1,3,4,5,9,8};
    int brr[6];
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum=sum+arr[i];
        brr[i]=sum;
    }
    printf("input elements are:\n");
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nAfter prefix sum:\n");
    for(int i=0;i<6;i++)
    {
        printf("%d ",brr[i]);
    }
    return 0;
}