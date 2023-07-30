#include<stdio.h>
int main()
{
    int x=3,y,z;
    y=x=10;
    z=x<10;/*here compiler compare the value of x with the condition is given to the following statement,
    if the condition is being fulfilled then the statement is true and the compiler prints value 1.
    else the condition is not being fulfilled then the statement is false and the compiler print  value 0.*/
    printf("x =%d y =%d Z =%d\n",x,y,z);
    return 0 ;
}