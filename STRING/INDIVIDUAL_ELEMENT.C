#include<stdio.h>
int main()
{
    char str[]="hellow World";
    str[0]='M';
    // int i=0;
    // while(str[i]!='\0')
    // {
    //     printf("%c",str[i]);// instesd of doing this we can write i[str], *(str+i) etc
    //     i++;
    // }
    printf("%s",str);
    return 0;
}