#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int size=2*n-1;
    //int start=0,end=size-1;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            int a=i;
            if(i>n) 
            a=2*n-i;
            int b=j;
            if(j>n) 
            b=2*n-j;
            int num;
            if(a<b) num =a;
            else num =b;
            printf("%d ",n+1-num); 
        }
        printf("\n");
    }
    return 0;
}