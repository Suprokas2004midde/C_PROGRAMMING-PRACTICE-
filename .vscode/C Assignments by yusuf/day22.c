#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,y,s;
    printf("Enter the value of a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(b*b-4*a*c);
    x=(-b+sqrt(x))/(2*a);
    y=(-b-sqrt(x))/(2*a);
    
    if(a==0&&b==0)
    printf("No Solution");
    else if(a==0)
    printf("there is only one root:%f",x);
    else if(s<0)
    printf("There is no real root");
    else
    printf("two roots are \n %f \n%f",x,y);
    return 0;
}