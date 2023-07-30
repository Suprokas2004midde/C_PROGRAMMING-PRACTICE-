/* 1  2  3  4  5  6
   20 21 22 23 24 7
   19 32 33 34 25 8
   18 31 36 35 26 9
   17 30 29 28 27 10
   16 15 14 13 12 11
*/
 
#include<stdio.h>
int main()
{
    int m;
    printf("Enter the size of row:");
    scanf("%d",&m);
    int n;
    printf("Enter the size of column:");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int top=0,left=0,bot=m-1,right=n-1;
    while(left<right || top<bot)
    {
        for(int i=left;i<=right;i++)
        {
            printf("%d ",arr[top][i]);
        }
        top++;
        for(int i=top;i<=bot;i++)
        {
            printf("%d ",arr[i][right]);
        }
         right--;
        for(int i=right;i>=left;i--)
        {
            printf("%d ",arr[bot][i]);
        }
        bot--;
        for(int i=bot;i>=top;i--)
        {
            printf("%d ",arr[i][left]);
        }
        left++;
    }
    return 0;
}