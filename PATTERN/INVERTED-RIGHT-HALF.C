#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row:\n");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        int dif=1;
        for(int j=dif;j<=i;j++)
        {
            printf("%d ",dif);
            dif=dif+2;
        }
        printf("\n");
    }
    return 0;
}