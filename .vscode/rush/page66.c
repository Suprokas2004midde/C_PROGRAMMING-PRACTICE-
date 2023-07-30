/*if the length of three sides of a triangle are entered through the keyboard,
write a program to check wheather the triangle is valid or not.*/

// the triangle is valid if the sum of two sides is greater than the larger one.

#include<stdio.h>
int main()
{
    float sd1,sd2,sd3,r1,r2,r3;
    printf("Enter the value of three sides:");
    scanf("%d%d%d\n",&sd1,&sd2,&sd3);
    //logic
    if(sd1<sd2&& sd2<sd3)
     if(sd3>sd1+sd2)
     printf("this triangle is valid");
     
}

