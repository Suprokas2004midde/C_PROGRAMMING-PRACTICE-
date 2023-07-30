// Convert a given number of days into months and days?
#include<stdio.h>
int main()
{
    int days,month,year;
    printf("Enter the days:");
    scanf("%d",&days);

    month=days/30;
    days=days%30;
    printf("months:%d\ndays=%d",month,days);
    return 0;
}