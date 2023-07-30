#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
              if(i==1||j==i||j==n)
              printf("%d ",j);
             else
             printf("  ");

        }
        printf("\n");
    }
    // for(int i=n;i>0;i--)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //          if(i==n||j==1||j==i)
    //          printf("%d ",j);
    //          else
    //          printf("  ");
    //     }
    //     printf("\n");
    // }
    return 0;
}