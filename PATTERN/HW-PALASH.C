#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j%2==0)
            printf("%d ",j*j*j);
            else
            printf("%d ",j*j);
        }
        printf("\n");
    }
    return 0;
}