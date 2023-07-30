// write a program to print the wave from (Horizental) of a given matrix....
#include<stdio.h>
int main()
{
    //1st matrix...
    int m;
    printf("Enter the row of 1st matrix:");
    scanf("%d",&m);
    int n;
    printf("Enter the column of 1st matrix:");
    scanf("%d",&n);
    // Declearing 1st matrix...
    int a[m][n];
    printf("Enter the indeces of matrix a....");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //output into wave from....
    for(int i=0;i<m;i++)
    {
        if (i%2!=0)
        {
            for(int j=n-1;j>=0;j--)
            {
                printf("%d ",a[i][j]);
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
        // for(int j=0;j<n;j++)
        // {
        //     printf("%d ",a[i][j]);
        // }
       printf("\n"); 
    }
    return 0;
}