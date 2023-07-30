#include<stdio.h>
int main()
{
    int arr[3][4]={2,3,4,5,6,7,8,9,3,2,6,5};
    int max=arr[0][0];
    int row=1,col=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
                row=i;
                col=j;
            }
        }
    }
    printf("The index of the element is:(%d,%d)\n",row,col);
    printf("The maximum value of this matrix is:%d",max);
    return 0; 
}