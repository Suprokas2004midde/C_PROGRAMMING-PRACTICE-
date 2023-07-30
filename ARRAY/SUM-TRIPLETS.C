#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the digit:");
    int arr[10]={2,3,4,5,11,7,6,8,9,1};
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            for(int k=j+1;k<10;k++)
            {
                if(arr[i]+arr[j]+arr[k]==n)
                {
                    printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                    count++;
                }
            }
        }
    }
    printf("\n");
    printf("Total triplets couunt is:%d",count);
    return 0;
}