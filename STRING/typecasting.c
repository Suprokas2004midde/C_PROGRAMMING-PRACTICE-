#include<stdio.h>
int main()
{
    char ch='\0';
    /* here it will generate an error because, within ('')  we can only type one value ...
       if we forcefully put double value like above... it shows an error but fortunately it end up with a result.....
       that shows the ascii vale of the last digit .......*/
    int type =(int)ch;
    printf("%d",type);
    // if we put %d format specifier then it will show the value(ASCII) of '\0' character......
    // and if we put %c format specifier then it will show nothing.....
    // but the ascii value of 0 is 48.....
    return 0;
}