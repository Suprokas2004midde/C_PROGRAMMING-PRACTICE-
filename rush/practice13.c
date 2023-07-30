#include<stdio.h>
 int main()
 {
    int num,backup,sum,r;
    printf("enter the number: ");
    scanf("%d", &num);
    backup=num;
    sum=0;

    while(num!=0)
    {
        r = num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if(sum==backup)
    printf("This is an Armstrong number");
    else
    printf("This is not an Armstrong Number");
    return 0;
 }