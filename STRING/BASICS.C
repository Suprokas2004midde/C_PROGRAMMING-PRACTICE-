#include<stdio.h>
int main()
{
    char str[10]={'a','b','c','d'}; // it is a character from of an array......
    // this declearation of string is very uneficient...BEST FROM OF IT WILL DONE IN NEXT PAGE....
    for(int i=0;i<4;i++)
    {
        printf("%p\n",str[i]);
    }
    return 0;
}