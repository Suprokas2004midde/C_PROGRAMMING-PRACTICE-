#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter the number:");
    scanf("%d",&x);
    int arr[10]={2,3,4,5,6,7,8,9,5,12};
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]+arr[j]==x)
            {
                printf("(%d,%d)\n",arr[i],arr[j]);
                count++;
            }
        }
    }
    printf("Total numbers of pair is:%d",count);
}