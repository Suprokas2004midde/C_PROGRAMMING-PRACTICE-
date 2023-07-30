#include<stdio.h>
int main()
{
    int i=5;
    char ch='a';
    float j=3.14;
    printf("%p %p %p\n",&i,&j,&ch);
    // int *x,**y;
    // x=&i;
    // y=&x;
    // printf("%d %d\n",*x,**y);
    return 0;
}