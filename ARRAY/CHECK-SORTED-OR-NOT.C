#include<stdio.h>
int main()
{
    int max=1,smax=0;
    int arr[7]={2,4,5,6,7,9,8};
    for(int i=1;i<7;i++)
    {
        if(arr[i]>=arr[i-1])
        {
            max++;
        }
        else
        {
            printf("Not a sorted array:");
            break;
        }
    }
    if(max==7)
    printf("this is a sorted array:\n");
    return 0;
}