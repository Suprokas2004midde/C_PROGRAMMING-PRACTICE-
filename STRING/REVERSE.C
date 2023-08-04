// REVERSE A STRING.....
#include<stdio.h>
int main()
{
    char str[40];
    printf("Enter the string:\n");
    scanf("%[^\n]s",str);
    printf("Your input was:%s\n",str);
    int i=0,b=0;
    while(str[i]!='\0')
    {
        b++;
        i++;
    }
    printf("Size of string is:%d\n",b);
    int first=0,last=b-1;
    while(first<=last)
    {
        int temp=str[first];
        str[first]=str[last];
        str[last]=temp;
        first++;
        last--;
    }
    printf("%s",str);
    return 0;
}