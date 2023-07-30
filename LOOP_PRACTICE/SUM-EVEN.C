#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=1,b=1;
    printf("%d %d ",a,b);
    int sum=0;
    for(int i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    printf("\n");
    printf("%d fibonacci number is %d",n,sum);
    return 0;
}