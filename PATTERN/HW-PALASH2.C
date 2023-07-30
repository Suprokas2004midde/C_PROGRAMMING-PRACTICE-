#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        int a=i,b=1;
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d ",a);
                a--;
            }
            else
            {
                printf("%d ",b);
                b++;
            }
        }
        printf("\n");
    }
    return 0;
}