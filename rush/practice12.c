#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the value to sum its digit:");
    scanf("%d", &n);
   
    while(n != 0)
    {
    sum=sum + n % 10;
    n=n / 10;
    }
    printf("The sum of it's digit is %d:", sum );
    return 0;
}
