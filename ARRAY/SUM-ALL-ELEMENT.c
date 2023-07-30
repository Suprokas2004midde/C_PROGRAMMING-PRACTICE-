#include<stdio.h>
int main()
{
    int arr[5]={2,8,9,6,7};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("The sum of all element is: %d",sum);
    return 0;
}