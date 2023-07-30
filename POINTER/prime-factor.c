#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int cpy=n;
    printf("The prime factors of %d is:\n",n);
    for(int i=2;i<=n;i++)
    {
        while(cpy%i==0)
        {
            printf("%d ",i);
            cpy=cpy/i;
        }
    }
    return 0;
}