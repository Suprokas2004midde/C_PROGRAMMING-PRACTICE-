#include<stdio.h>
int main()
{
    // takin input.....
    int n;
    printf("Enter the range:");
    scanf("%d",&n);
    // declearing array.....
    int arr[n-1]={1,2,3,4,5,6,8,9,10};
    // calculate the sum of given range....
    int sumall= n*(n+1)/2;
    // calcute the sum of the elemenmts.......
    int sumele=0;
    for(int i=0;i<n-1;i++)
    {
        sumele=sumele+arr[i];
    }
    // calculate the difference......
    int difference;
    difference=sumall-sumele;
    // output.....
    printf("the missing element in the range is:%d",difference);
    return 0;
}