#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c,p,q;
    printf("enter value a, b and c :");
    scanf("%f %f %f",&a,&b,&c);
    a=(b*b-4*a*c);
    p=(-b-sqrt(a))/2*a;
    q=(-b-sqrt(a))/2*a;
    printf("oute value :%f %f",p,q);
    return 0;
}