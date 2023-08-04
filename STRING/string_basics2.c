#include<stdio.h>
int main()
{
    //char str[1]="Hellow World";
    // IF THE DECLEARATION, OF THE STRING SIZE IS SMALLER THAN WHATEVER WE WROTE IN THE INITIALIZING PART... THEN IT GENERATES AN ERROR....
    char str[]="Hellow World";
    // THIS IS AN EASY FORMAT OF DECLEARING STRING IN AN ARRAY FORMAT.....
    // when we put any string like that compiler put a (null character) within it autometically.....
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }

    // above code is very hard to write while coading...

    return 0;
}