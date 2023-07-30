#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row:");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++)
    {
        if(i<n)
        {
            for(int j=1;j<=i;j++)
            printf("* ");
        }
        else
        {
            for(int k=1;k<=2*n-i;k++)
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}