#include<stdio.h>
int main()
{
    int a,m;
    printf("Enter the number:");
    scanf("%d",&a);

    if(a>=0&&a<=39)
    m=1;
    else if(a>=40&&a<=49)
    m=4;
    else if(a>=50&&a<=59)
    m=5;
    else if(a>=60&&a<=69)
    m=6;
    else if(a>=70&&a<=79)
    m=7;
    else if(a>=80&&a<=89)
    m=8;
    else if(a>=90&&a<=100)
    m=9;

    switch (m)
    {
    case 1:
        printf("Grade-F");
        break;

    case 4:    
        printf("Grade-D");
        break;

    case 5:
        printf("Grade-C");
        break;

    case 6:
        printf("Grade-B");
        break;

    case 7:
        printf("Grade-A");
        break;

    case 8:
        printf("Grade-E");
        break;

    case 9:
        printf("Grade-O");
        break;

    default:
        printf("Input error...");
        break;

    }
    return 0;
}