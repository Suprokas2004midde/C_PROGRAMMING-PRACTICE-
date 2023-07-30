// QUES.Write a program to print the row having maximum sum of element in the given array....(FOR POSITIVE ELEMENTS)
#include<stdio.h>
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,6,5,2};
    int sumrow,sumele,prevsum=0,maxrow=-1;
    for(int i=0;i<3;i++)
    {
        sumele=0;
        for(int j=0;j<4;j++)
        {
            sumele=sumele+arr[i][j];
        }
        if(prevsum<sumele)
        {
            maxrow=i;
            prevsum=sumele;
        }
    }
    printf("the row having maximum sum of element is:%d\n",maxrow+1);
    printf("the sum is:%d",prevsum);
    return 0;
}