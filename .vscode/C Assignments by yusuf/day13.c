//swap two numbers without using third variable...
//there is two types to swap two numbers...   1.using 3rd variable 2.without using 3rd variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of 'a' and 'b'");
    scanf("%d\n%d",&a,&b);
    //without using third variable....
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Now the values after swaping is:\na=%d\nb=%d",a,b);
    return 0;
    }