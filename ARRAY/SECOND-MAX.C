#include<stdio.h>
int main()
{
    int max,smax;
    int arr[7]={7,8,5,9,3,2,1};
    max=arr[0],smax=-1;
    for(int i=0;i<7;i++)
    {
        if(max<arr[i])
        {
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]&& arr[i]<max)
        {
            smax=arr[i];
        }
        // if(arr[i]>max)
        // {
        //     max=arr[i];
        // }
    }
    // for(int i=0;i<7;i++)
    // {
    //     if(arr[i]<max && smax<arr[i])
    //     smax=arr[i];
    // }
    printf("The second largest element is:%d",smax);
    return 0;
}