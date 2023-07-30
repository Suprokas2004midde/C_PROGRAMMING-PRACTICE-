//convert a tempareture from fahrenheit scale to celsius scale.
#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the fahrenheit value:");
    scanf("%f",&f);

    c=((f-32)/9)*5;
    printf("the celsius value is:%f", c);
    return 0;
}