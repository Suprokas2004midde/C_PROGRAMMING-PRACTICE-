#include<stdio.h>
int main()
{
    float a;
    printf("Enter the number:\n");
    scanf("%f",&a);

    if(a>=0&&a<=100)
    {
    if(a>=0&&a<=39)
    printf("Grade-F");
    else if(a>=40&&a<=49)
    printf("Grade-D");
    else if(a>=50&&a<=59)
    printf("Grade-C");
    else if(a>=60&&a<=69)
    printf("Grade-B");
    else if(a>=70&&a<=79)
    printf("Grade-A");
    else if(a>=80&&a<89)
    printf("Grade-E");
    else
    printf("Grade-O");
    }
    else
    printf("Input error....");
    return 0;
}