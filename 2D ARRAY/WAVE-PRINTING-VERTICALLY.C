// write a program to print the wave form (vertically) of a given matrix.....
 
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
        for(int j=0;j<n;j++)
        {
            int k=0;
            if(j%2!=0)
            {
                k=m-1-i;
                printf("%d ",a[k][j]);
            }
            else
            {
                k=i;
                printf("%d ",a[k][j]);
            }
        }
        printf("\n");
    }
    return 0;
}