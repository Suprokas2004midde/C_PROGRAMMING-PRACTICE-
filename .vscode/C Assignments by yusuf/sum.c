#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        // int i;
        // i=n%10;
        // sum=sum+i;
        // n=n/10;
        sum++;
        n=n/10;
    }
    printf("%d\n",sum);
    printf("%d",n);
    return 0;
}
