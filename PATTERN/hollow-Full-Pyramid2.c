#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int space=n-i;
        int num=i;
        int max=2*i-1;
        for(int j=1;j<=space;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            if(num<=max)
            {
                printf("%d ",num);
                num++;
            }
        }
        for(int l=1;l<=i-1;l++)
        {
            max--;
            printf("%d ",max);
        }
        printf("\n");
    }
    return 0;
}