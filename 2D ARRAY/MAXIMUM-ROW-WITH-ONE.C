#include<stdio.h>
int main()
{
    int arr[3][4]={1,0,0,1,1,0,1,0,1,1,0,1};
    int countmax=0;
    int maxrow=-1;
    for(int i=0;i<3;i++)
    {
        int count=0;
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==1)
            count++;
        }
        if(count>countmax)
        {
            maxrow=i;
            countmax=count;
        }
    }
    printf("the maximum count in a row is: %d\n",countmax);
    printf("The maximum row is:%d",maxrow+1 );
    return 0;
}