#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the number of row:");
    scanf("%d",&row);
    printf("Enter the number of col:");
    scanf("%d",&col);
    for(int i=1;i<=row;i++)
    {
        for(int j=row-i;j>0;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=col;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}