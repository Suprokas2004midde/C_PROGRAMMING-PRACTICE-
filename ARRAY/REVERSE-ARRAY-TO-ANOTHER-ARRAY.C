//Reverse an array to another array.....
#include<stdio.h>
int main()
{
    // int n;
    // printf("Enter the size of array:");
    // scanf("%d",&n);
    // int a=7;
    int arr[7]={1,2,3,4,9,6,7},brr[7];
    int b=6; //here b is (n-1).....
    for(int i=0;i<7;i++)
    {
        brr[b]=arr[i];
        b--;
    }
    for(int i=0;i<7;i++)
    {
        printf("%d ",brr[i]);
    }
    return 0;
}