#include<stdio.h>
int main()
{
    int i=5;
    int *x,*y;
    x=&i;
    y=x;
    printf("%p\n",y);
    printf("%p\n",x);
    printf("%p\n",&i);
    printf("%d %d %d %d %d\n",i,*(&i),*&i,*x,*y);
    return 0;
}