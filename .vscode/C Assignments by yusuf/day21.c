//check wheather a year is leap year or not...
#include<stdio.h>
int main()
{
    int year,a;
    printf("Enter the year:");
    scanf("%d",&year);

    if(year%100==0)
    {
        if (year%400==0)
        printf("this is a leap year");
        else
        printf("This is not a leap year");
    }
    else{
    if(year%4==0)
    printf("This is a leap year");
    else
    printf("This is not a leap year");
    }
    return 0;

}