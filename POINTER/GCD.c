#include<stdio.h>
int min(int x,int y)
{
    if(x<y)
    return x;
    else
    return y;
}
int main()
{
    int a,b;
    int count=0;
    printf("Enter the number of a and b:");
    scanf("%d%d",&a,&b);
    // int min;
    // if(a<b)
    // min=a;
    // else
    // min=b;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%d ",i);
            count=i;
        }
    }
    printf("\n");
    printf("The greatest common divisor is: %d",count);
    return 0;
}