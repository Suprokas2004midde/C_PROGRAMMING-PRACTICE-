#include<stdio.h>
int main()
{
    int n,i=2;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(;i<=n-1;i++)
    {
        if(n%i==0)
        {
            printf("This is not a prime number...");
            break;
        }
        // else
        // {
        //     printf("This is a prime number....");
        //     break;
        // }
        
    }
    if(i==n)
        {
            printf("This is a prime number...");
        }
    return 0;
}