#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the no.of row and col:");
    scanf("%d%d",&row,&col);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1||i==row)
            printf("* ");
            else if(j==1||j==col)    
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}