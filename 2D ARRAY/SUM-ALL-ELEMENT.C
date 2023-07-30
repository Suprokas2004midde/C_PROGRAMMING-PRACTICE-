// QUES- Find the sum of all elements in the matrix of n*m.....
#include<stdio.h>
int main()
{
    // int n=4,m=5;
    int sum=0;
    int arr[4][5]={1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1,1,2};
    for (int  i = 0; i < 4; i++)
    {
        for (int  j = 0; j < 5; j++)
        {
            sum = sum+arr[i][j];
        }
    }
    printf("The sum of all elemrnt is :%d",sum);
    return 0;
}