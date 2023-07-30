/* 1
   0 1
   1 0 1
   0 1 0 1
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=0,temp,b=1;
        for(int j=1;j<=i;j++)
        {
           if(i%2==0)
           {
            printf("%d ",a);
            temp=a;
            a=b;
            b=temp;
           }
           else
           {
            printf("%d ",b);
            temp=b;
            b=a;
            a=temp;
           }
        }
        printf("\n");
    }
    return 0;
}