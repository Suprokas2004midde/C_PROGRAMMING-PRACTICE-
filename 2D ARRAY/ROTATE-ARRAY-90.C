//OUES:-Write a program to rotate an array by 90' clock wise.....?
#include<stdio.h>
int main()
{
    //Declearation...
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    //Transpose...
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //reverse....
    for(int i=0;i<4;i++)
    {
        int a=0,b=3;
        while(a<b)
        {
            int temp1=arr[i][a];
            arr[i][a]=arr[i][b];
            arr[i][b]=temp1;
            a++;
            b--;
        }
    }
    //output..
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}